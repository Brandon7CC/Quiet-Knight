#include <stdio.h>
#include<winsock2.h>
#include "implant.h"

#pragma comment(lib,"ws2_32.lib") //Winsock Library

int main() {

	WSADATA wsa;
	SOCKET implant_socket;

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

    return 0;
}