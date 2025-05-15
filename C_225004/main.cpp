#include "hinh_hoc.h"
#include <stdio.h>
#include <malloc.h>
#include <iostream>
#include <stdlib.h>
#include <stdarg.h>



template <class  T, int num_item = 0>
class mang
{
public:
	T* data;
	int size;

	mang(int num_item)
	{
		data = (T*)malloc(num_item * sizeof(int));
		if (data == NULL)
			throw std::runtime_error("khong the malloc");
		size = num_item;
	}

	mang(std::initializer_list <T> init_list)
	{
		size = init_list.size();
		data = (T*)malloc(size * sizeof(int));
		int index = 0;
		for (auto item : init_list)
		{
			data[index++] = item;
		}
	}

	mang()
	{
		data = (T*)malloc(num_item * sizeof(int));
		if (data == NULL)
			throw std::runtime_error("khong the malloc");
		size = num_item;
	}

	T& operator[](int index)
	{
		if (index >= size)
			throw std::runtime_error("Vuot qua so luong phan tu trong mang");

		return *(data + index);
	}

	
	// viêt method: thêm một đối tượng vào trong mảng ở vị trí cuối mảng
	// input: giá trị của đối tượng được thêm vào
	// output: không có
	void push_back(T val)
	{
		// cấp phát vùng nhớ mới lớn hơn vùng nhớ củ
		int* Newtemp = (T*)malloc(sizeof(int) * (size + 1));
		if (Newtemp == NULL)
			throw std::runtime_error("khong the malloc de cap phat vung nho moi");
		// copy dữ liệu từ vùng nhớ củ sang vùng nhớ mới và set giá trị của đối tượng cuối mảng
		for (int i = 0; i < size; i++)
		{
			Newtemp[i] = data[i];
		}
		Newtemp[size] = val;
		// hủy vùng nhớ củ
		free(data);
		// cập nhật địa chỉ của vùng nhớ mới vào con trỏ data
		data = Newtemp;
		// cập nhật lại giá trị của biên size
        size++;
	}

	~mang()
	{
		free(data);
	}

	T* begin()
	{
		return data;
	}

	T* end()
	{
		return data + size;
	}
};


struct hocsinh
{
	char* ten;
};

int function()
{
	return 0;
}

#include <array>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
int main(void)
{
	
	mang<int> arr = { 2,1,3,65,7};
	std::sort(arr.begin(), arr.end());
	for (auto a : arr)
	{
		printf("a: %d\n", a);
	}
	
	
	return 0;
}