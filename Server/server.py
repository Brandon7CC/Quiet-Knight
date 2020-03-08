# ---------------------------------------------
# Brandon Dalton
# File: server.py
# Description: This server will facilitate the
# connection of implants.
# ---------------------------------------------

import socket
import threading
import sys
import time

if __name__ == "__main__":
    # Server parameters:
    # Local host address
    __HOST = '127.0.0.1'
    # Port address
    __PORT = 61110
    
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind((__HOST, __PORT))
    server_socket.listen()

    while True:
        (clent_socket, client_ip) = server_socket.accept()
        print("New Connection: " + client_ip)