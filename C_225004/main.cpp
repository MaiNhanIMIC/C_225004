#include "hinh_hoc.h"
#include <stdio.h>
class phan_so {
public:
	int mau_so;
	int tu_so;
	phan_so nhan_phan_so(phan_so khac);
	phan_so operator*(phan_so khac);

	phan_so();
	phan_so(int tu, int mau);
	~phan_so()
	{
		printf("doi tuong bi giai phong vung nho\n");
	}
};

phan_so::phan_so()
{
	tu_so = 0;
	mau_so = 0;
	printf("ham tao 0 doi so duoc khoi chay \n");
}


phan_so phan_so::nhan_phan_so(phan_so khac) {
	phan_so kq;
	kq.tu_so = tu_so * khac.tu_so;
	kq.mau_so = mau_so * khac.mau_so;
	return kq;
}

phan_so::phan_so(int tu, int mau)
{
	tu_so = tu;
	mau_so = mau;
	printf("ham tao 2 doi so duoc khoi chay \n");
}
phan_so phan_so::operator*(phan_so khac) {
	phan_so kq;
	kq.tu_so = tu_so * khac.tu_so;
	kq.mau_so = mau_so * khac.mau_so;
	return kq;
}

void main()
{
	phan_so a;
	
	phan_so b(1, 2);
}