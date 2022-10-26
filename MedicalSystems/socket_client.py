import socket

HOST = '192.168.1.109'
PORT = 69
while(1):
    q = input("Please enter question:") + '?'
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect((HOST, PORT))
        s.sendall(q.encode())
        data = s.recv(1024).decode()
        print('Clent "" recirved ', repr(data))
