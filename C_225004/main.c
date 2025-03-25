#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct
{
	int tu;
	int mau;
} phan_so_t;

// Chức nâng: Nhân 2 phân số
// Input:
//	phan_so_t x - phân số thứ nhất
//	phan_so_t y - phân số thứ hai
// Output: (phan_so_t) kết quả của phép tính
phan_so_t NhanPhanSo(phan_so_t x, phan_so_t y)
{
	phan_so_t kq;
	kq.tu = x.tu * y.tu;
	kq.mau = x.mau * y.mau;
	return kq;
}

void main()
{
	phan_so_t A = { 1, 2 };
	phan_so_t B = { .mau = 3, .tu = 2 };

	phan_so_t C = NhanPhanSo(A, B);
	printf("ket qua: %d/%d \n", C.tu, C.mau);
}
