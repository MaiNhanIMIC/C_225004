#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main()
{
	int so_tien_can_rut = 10000;
	int so_to_50 = 0;
	int so_to_100 = 0;
	int so_to_200 = 0;
	int so_to_500 = 0;
	int tong_tien_atm_tra = 0;
	while (tong_tien_atm_tra < so_tien_can_rut)
	{
		if (so_tien_can_rut - tong_tien_atm_tra >= 50)
			so_to_50++;
		tong_tien_atm_tra = so_to_50 * 50 + so_to_100 * 100 + so_to_200 * 200 + so_to_500 * 500;

		if (so_tien_can_rut - tong_tien_atm_tra >= 100)
			so_to_100++;
		tong_tien_atm_tra = so_to_50 * 50 + so_to_100 * 100 + so_to_200 * 200 + so_to_500 * 500;

		if (so_tien_can_rut - tong_tien_atm_tra >= 200)
			so_to_200++;
		tong_tien_atm_tra = so_to_50 * 50 + so_to_100 * 100 + so_to_200 * 200 + so_to_500 * 500;

		if (so_tien_can_rut - tong_tien_atm_tra >= 500)
			so_to_500++;
		tong_tien_atm_tra = so_to_50 * 50 + so_to_100 * 100 + so_to_200 * 200 + so_to_500 * 500;
	}
	
}