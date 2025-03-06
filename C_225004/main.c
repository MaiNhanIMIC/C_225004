#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	float diem = 0;

	printf("nhap diem trung binh: ");
	scanf("%f", &diem);

	if (diem >= 8.0)
	{
		printf("GIOI \n");
	}
	else if (diem >= 6.5)
	{
		printf("KHA \n");
	}
	else if (diem >= 5.0)
	{
		printf("TRUNG BINH \n");
	}
	else
	{
		printf("YEU \n");
	}
}