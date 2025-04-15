#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

// Tạo ra một kiểu dữ liệu là con trỏ hàm - con trỏ hàm dùng để chứa địa chỉ của hàm có output: float, input: float
typedef float (*function_pointer_t)(float);

float fx(float x)
{
	return x * x;
}

float gx(float x)
{
	return 2 * x * x + 3 * x + 1;
}

float tx(float x)
{
	return sin(x) + 1;
}

float tinhTichPhan(int a, int b, function_pointer_t pfunc)
{
	float h = (b - a) / 1000.0f;
	float S = 0;
	for (int i = 0; i < 1000; i++)
	{
		float db = pfunc(a+i*h);
		float dl = pfunc(a + (i + 1) * h);
		S += ((dl + db) / 2) * h;
	}
	return S;
}

void main()
{
	tinhTichPhan(1, 2, gx);
	tinhTichPhan(1, 2, tx);

}