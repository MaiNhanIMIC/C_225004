#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	int x = 0;
	float y = 0;
	printf("nhap gia tri cho x: ");
	scanf("%d", &x);

	printf("nhap gia tri cho y: ");
	scanf("%f", &y);

	printf("Hello world, gia tri x: %d, y: %f\n", x, y);
}