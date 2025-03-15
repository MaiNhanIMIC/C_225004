#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	//KHAI BÁO 10 đối tượng, mỗi đối tượng có kiểu dữ liệu là int
	int arr[] = { 1,2,2,4,4,3,1,3,2,4,1,3 };

	// tìm số lớn nhất trong mãng
	int so_lon_nhat = 0;
	int so_luong_doi_tuong = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < so_luong_doi_tuong; i++)
	{
		if (so_lon_nhat < arr[i]) {
			so_lon_nhat = arr[i];
		}
	}

	// in ra casc vị trí của các số bằng với số lớn nhất
	for (int i = 0; i < so_luong_doi_tuong; i++)
	{
		if(arr[i] == so_lon_nhat)
			printf("%d ", i);
	}

}



