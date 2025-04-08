#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#pragma pack(push)
#pragma pack(1)
typedef struct
{
	int a;
	char b;
} test1_t;
#pragma pack(pop)

typedef struct
{
	int a;
	char* b;

} test2_t;

void main()
{
	printf("size of test1_t: %d byte\n", sizeof(test1_t));
	printf("size of test2_t: %d byte\n", sizeof(test2_t));
}
