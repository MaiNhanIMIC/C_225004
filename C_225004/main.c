#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef enum
{
	NAM, 
	NU
}gioiTinh_t;
// muốn khai bao array, bao gồm nhiều đối tượng, mỗi đối tượng là 1 string (char*)
char* convert_gioiTinh_string[] = { "Nam", "Nu" };

typedef enum
{
	GIOI,
	KHA,
	TRUNG_BINH,
	YEU
} loai_t;
char* convert_loai_string[] = { "Gioi", "Kha", "Trung Binh", "Yeu" };
typedef struct
{
	char* ten;
	int tuoi;
	gioiTinh_t gioi_tinh;
	float diem_toan;
	float diem_van;
	loai_t loai;
} hoc_sinh_t;

void xep_loai(hoc_sinh_t* arr, int so_luong)
{
	float TB = 0;
	for (int i = 0; i < so_luong; i++)
	{
		TB = (arr[i].diem_toan + arr[i].diem_van) / 2;
		if (TB >= 8)
			arr[i].loai = GIOI;
		else if(TB >= 6.5)
			arr[i].loai = KHA;
		else if (TB >= 5)
			arr[i].loai = TRUNG_BINH;
		else
			arr[i].loai = YEU;
	}
}

void In_DS(hoc_sinh_t* arr, int so_luong)
{
	for (int i = 0; i < so_luong; i++)
	{
		printf("Ten :%s\n", arr[i].ten);
		printf("Tuoi:%d\n", arr[i].tuoi);
		printf("Gioi tinh:%s\n", convert_gioiTinh_string[arr[i].gioi_tinh]);
		printf("Diem toan:%f\n", arr[i].diem_toan);
		printf("Diem van:%f\n", arr[i].diem_van);
		printf("Loai:%s\n", convert_loai_string[arr[i].loai]);
	}

}

void main()
{
	hoc_sinh_t arr[] = {
		{"Nguyen Van A", 18, NAM, 8.5, 8.6},
		{"Nguyen Thi B", 18, NU , 7.5, 7.0},
		{"Nguyen Van C", 18, NAM, 6.5, 6.0}
	};

	xep_loai(arr , 3);
	In_DS(arr, 3);
}
