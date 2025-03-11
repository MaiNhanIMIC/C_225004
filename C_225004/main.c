#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			printf("%dx%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
}