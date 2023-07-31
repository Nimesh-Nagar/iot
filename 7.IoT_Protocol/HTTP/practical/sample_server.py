from http.server import BaseHTTPRequestHandler, HTTPServer
import json

# In-memory data store (dictionary)
data = {
    "1": {"name": "John Doe", "age": 30},
    "2": {"name": "Jane Smith", "age": 25}
}

class SimpleServer(BaseHTTPRequestHandler):
    def _set_response(self, status_code=200, content_type='text/html'):
        self.send_response(status_code)
        self.send_header('Content-type', content_type)
        self.end_headers()

    def do_GET(self):
        if self.path == '/users':
            self._set_response(content_type='application/json')
            self.wfile.write(json.dumps(data).encode())
        else:
            self._set_response(404)
            self.wfile.write(b"Page not found")

    def do_POST(self):
        if self.path == '/users':
            content_length = int(self.headers['Content-Length'])
            post_data = self.rfile.read(content_length)
            new_user = json.loads(post_data)

            # Generate a new unique ID for the user
            new_id = str(len(data) + 1)
            data[new_id] = new_user

            self._set_response(content_type='application/json')
            self.wfile.write(json.dumps({"message": "User created successfully!", "id": new_id}).encode())
        else:
            self._set_response(404)
            self.wfile.write(b"Page not found")

    def do_PUT(self):
        if self.path.startswith('/users/'):
            user_id = self.path.split('/')[2]
            if user_id in data:
                content_length = int(self.headers['Content-Length'])
                put_data = self.rfile.read(content_length)
                updated_user = json.loads(put_data)
                data[user_id] = updated_user

                self._set_response(content_type='application/json')
                self.wfile.write(json.dumps({"message": "User updated successfully!"}).encode())
            else:
                self._set_response(404)
                self.wfile.write(b"User not found")
        else:
            self._set_response(404)
            self.wfile.write(b"Page not found")

    def do_DELETE(self):
        if self.path.startswith('/users/'):
            user_id = self.path.split('/')[2]
            if user_id in data:
                del data[user_id]

                self._set_response(content_type='application/json')
                self.wfile.write(json.dumps({"message": "User deleted successfully!"}).encode())
            else:
                self._set_response(404)
                self.wfile.write(b"User not found")
        else:
            self._set_response(404)
            self.wfile.write(b"Page not found")

def run():
    server_address = ('localhost', 8000)
    httpd = HTTPServer(server_address, SimpleServer)
    print('Starting the server...')
    httpd.serve_forever()

run()
