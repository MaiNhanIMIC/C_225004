#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

int g_var = 0;
HANDLE ReadPipe;
HANDLE WritePipe;
HANDLE mutex_lock;

void print_log(char* log)
{
	int log_len = strlen(log);
	for (int i = 0; i < log_len; i++)
	{
		printf("%c", log[i]);
		Sleep(100);
	}
}

DWORD WINAPI function_1(_In_ LPVOID lpParameter)
{
	while (1)
	{
		WaitForSingleObject(mutex_lock, INFINITE);
		print_log("function_1 is running...\n");
		ReleaseMutex(mutex_lock);
		Sleep(500);
	}
}


void main()
{
	HANDLE thread_1 = CreateThread(NULL, 1024, function_1, NULL, 0,NULL);
	mutex_lock = CreateMutex(NULL, 0, NULL);
	
	while (1)
	{
		WaitForSingleObject(mutex_lock, INFINITE);
		print_log("main is running...\n");
		ReleaseMutex(mutex_lock);
		Sleep(1000);
	}
}