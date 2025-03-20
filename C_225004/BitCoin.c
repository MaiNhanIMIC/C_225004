#include "BitCoin.h"
#define _WINSOCK_DEPRECATED_NO_WARNINGS 
#include <stdio.h>
#include "Ws2tcpip.h"
#pragma comment(lib,"ws2_32.lib") //Winsock Library

WSADATA wsa;
SOCKET s;
struct sockaddr_in server;

void Socket_Client_Init(char* ServerIP, int port);

int Send(char* data);
int Recv(char* buff, int size);

void GetBitCoinPrice(char* buffer, int size)
{
	memset(buffer, 0, size);
	Socket_Client_Init("[20.4.103.249", 80);
	char *msg = "GET /?api_key=7a8ed0e453bebe07bdb9a426be9d036e3b6810eacb5be079043c5730170baa95 HTTP/1.1\r\nHost: data-streamer.cryptocompare.com\r\n\r\n";
	Send(msg);
	int numData = Recv(buffer, size);

}

void Socket_Client_Init(char* ServerIP, int port)
{

	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{ 
		printf(" Failed.Error Code : %d\r\n", WSAGetLastError());
	}
	else
	{
		//Create a socket
		if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
		{
			printf("Could not create socket : %d\r\n", WSAGetLastError());
		}
		else
		{
			server.sin_addr.s_addr = inet_addr(ServerIP);

			server.sin_family = AF_INET;
			server.sin_port = htons(port);

			//Connect to remote server
			if (connect(s, (struct sockaddr*) & server, sizeof(server)) < 0)
			{
				printf("connect error\r\n");
			}
		}
	}
}

int Send(char* data)
{
	int size = 0;
	while (data[size++] != '\0');
	return send(s, data, size - 1, 0);
}

int Recv(char* buff, int size)
{
	return recv(s, buff, size, 0);
}
