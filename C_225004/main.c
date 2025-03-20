#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



// Chức năng: cộng 2 số nguyên
// input: hai số nguyên
//	int x: số nguyên thứ nhất
//	int y: số nguyên thứ hai
// output int: kêt quả
int Cong_So_Nguyen(int x, int y)
{
	// output về một đối tượng int
	int ketqua = 0;
	ketqua = x + y;
	return ketqua;
}

// Chức năng: in hello ra màn hình console
// input: không có
// output: không có
void In_Hello()
{
	printf("hello\n");
}

// Chức năng: dùng để tính tổng các giá trị trong mảng char
// input: mảng char
//	char* dia_chi: địa chỉ bất đầu của mảng
//	int so_luong : số lượng phần tử trong mảng
// output: int kết quả của phép tính
int Tong_Mang(char* dia_chi, int so_luong)
{
	int ketqua = 0;
	for (int i = 0; i < so_luong; i++)
	{
		ketqua += *(dia_chi + i);
		// ketqua += dia_chi[i];
	}
	return ketqua;
}

// Chức nâng: dùng để điếm số ký tự trong chuổi
// input: chuổi
//	char* chuoi: địa chỉ bất đầu của chuổi
// output: int số lượng ký tự
int Diem_Ky_Tu(char* chuoi)
{
	int ketqua = 0;
	while (chuoi[ketqua] != 0)
	{
		ketqua++;
	}
	return ketqua;
}


void main()
{
	

}

