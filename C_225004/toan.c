#include "toan.h"

// chức nâng nhân 2 số nguyên
// input:
//	int x: số nguyên thứ nhất
//	int y: số nguyên thứ hai
// output: int - ket quả của phép tính
int Nhan(int x, int y)
{
	int ketqua = 0;
	//2 * 3 = 2 + 2 + 2;
	for (int i = 0; i < y; i++)
	{
		//ketqua = ketqua + x;
		ketqua = Cong(ketqua, x);
	}

	return ketqua;
}

// chức nâng công 2 số nguyên
// input:
//	int x: số nguyên thứ nhất
//	int y: số nguyên thứ hai
// output: int - ket quả của phép tính
int Cong(int x, int y)
{
	int ketqua = 0;
	ketqua = x + y;
	return ketqua;
}