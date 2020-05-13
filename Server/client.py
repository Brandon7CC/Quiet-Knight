# ---------------------------------------------
# Brandon Dalton
# File: client.py
# ---------------------------------------------


class Client:

    def __init__(self, socket, ip):
        self.__socket = socket
        self.__ip = ip
    
    @property
    def socket(self):
        return self.__socket
    
    @socket.setter
    def socket(self, socket):
        self.__socket = socket
    
    @property
    def ip(self):
        return self.__ip
    
    @ip.setter
    def ip(self, ip):
        self.__ip = ip