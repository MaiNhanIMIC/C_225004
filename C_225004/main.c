#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef union
{
	struct {
		char bit_0 : 1;
		char bit_1 : 1;
		char bit_2 : 1;
		char bit_3 : 1;
		char bit_4 : 1;
		char bit_5 : 1;
		char bit_6 : 1;
		char bit_7 : 1;
	};
	char val;
} byte_t;

void main()
{
	byte_t A = { 0 };
	A.bit_1 = 1;
	A.bit_3 = 1;

	printf("A: %d \n", A.val);

}
