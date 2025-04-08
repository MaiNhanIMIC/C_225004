#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct
{
	unsigned short x;
	unsigned char y[2];
}struct_t;

typedef union
{
	unsigned short x;
	struct {
		unsigned char y_low;
		unsigned char y_high;
	};
	
}union_t;

void main()
{
	unsigned short val = 0x1234;

	unsigned char low;
	unsigned char high;

	union_t sv;
	sv.x = val;
	low = sv.y_low;
	high = sv.y_high;
}
