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

from client import Client

connections = []


def read_from_connection(self):
    pass


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
        client_socket, client_ip = server_socket.accept()
        connections.append(Client(client_socket, client_ip))
        print("New Connection: " + str(client_ip))
