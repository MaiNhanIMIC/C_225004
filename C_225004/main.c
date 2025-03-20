#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "BitCoin.h"

// bài 1: điếm số ký tự trong chuổi
// input:
//	char* str: chuổi cần tìm 
// output: int số lượng ký tự trong chuổi
int Tim_So_Ky_Tu(char* str)
{
	int diem = 0;
	while (str[diem] != 0)
	{
		diem++;
	}
	return diem;
}


// bài 6: tìm ký tự c trong chuổi str
// input:
//	char* str : chuỗi cần tìm
//	char c	  : ký tự cần tìm
// output: char* địa chỉ của c trong str
char* Tim_Ky_Tu(char* str, char c)
{
	int chieu_dai_chuoi = Tim_So_Ky_Tu(str);
	for (int i = 0; i < chieu_dai_chuoi; i++)
	{
		if (str[i] == c)
			return str + i;
	}
	return 0;
}

// bài 7: tìm chuổi subStr trong chuổi str
// input:
//	char* str: chuổi lớn cần tìm
//	char* subStr: chuổi nhỏ cần tìm
// output: char* địa chỉ của subStr trong str
char* Tim_Chuoi(char* str, char* subStr)
{
	int chieu_dai_str = Tim_So_Ky_Tu(str);
	int chieu_dai_subStr = Tim_So_Ky_Tu(subStr);
	for (int i = 0; i < chieu_dai_str; i++)
	{
		int j = 0;
		for (; j < chieu_dai_subStr; j++)
		{
			if (str[i + j] != subStr[j])
				break;
		}
		if (j == chieu_dai_subStr)
			return str + i;
	}
	return 0;
}

void main()
{
	char str[] = "xin chao moi nguoi";
	char subStr[] = "chau";
	char* vi_tri = Tim_Chuoi(str, subStr);
}
