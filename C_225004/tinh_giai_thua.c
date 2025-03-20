#include "toan.h"

int Tinh_Giai_Thu(int x, int y)
{
	int ketqua = 1;
	for (int i = 0; i < y; i++)
	{
		//ketqua = ketqua * i;
		ketqua = Nhan(ketqua, i);
	}
	return ketqua;
}