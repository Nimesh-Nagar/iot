import socket 
import sys 

host = "127.0.0.1"
port = 9000

# create a Socket to connnect two computers
def create_socket():
    try:
        global s
        s = socket.socket()
    
    except Exception as msg:
        print("Socket creation Error : " + str(msg))
        s.close()

        
# Binding the socket and Listening for connections
def bind_socket():
    try:
        print("Binding the Port : " + str(port))
        
        s.bind((host,port))
        s.listen(5)
    
    except socket.error as msg:
        print("Socket Binding Error : " + str(msg) + "\n" + "Retrying......")
        bind_socket()
        

# socket must in listening mode
def socket_accept():
    conn, address = s.accept()
    print(f"Connection Established !! | IP : {address[0]}  | Port : {address[1]} ")

    send_commands(conn)
    conn.close()


# send commands to client 
def send_commands(conn):
    while True:
        cmd = input()
        
        if cmd == 'quit':
            conn.close()
            s.close()
            sys.exit()
            
        if len(str.encode(cmd)) > 0:
            conn.send(str.encode(cmd))
            client_resp = str(conn.recv(1024),"utf-8")
            print(client_resp, end="")
            
def main():
    create_socket()
    bind_socket()
    socket_accept()
    

if __name__ == "__main__":
    main()
    
