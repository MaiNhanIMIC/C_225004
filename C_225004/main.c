#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int value;
	void* previous_node;
}node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;
/*
3. Add: thêm một node vào cuối linked_list
  - Input:
   * linked_list_t* - địa chỉ đối tượng linked list. Cái mà chúng ta sẽ add node vào đó
   * int - giá trị của node được add vào
  - Output: void
  - Gợi ý: sử dụng cấp phát động(malloc hoặc calloc) để tạo ra node, và gán previous_node lưu địa chỉ của node trước.

*/
void AddNodeToLinkList(linked_list_t* ll, int val)
{
	node_t* node = malloc(sizeof(node_t));
	node->value = val;

	if (ll->len > 0)
	{
		node->previous_node = ll->last_node;
	}
	else
	{
		node->previous_node = 0;
	}
	ll->last_node = node;
	ll->len++;
}

/*
9. GetValueIndex: lấy giá trị của node ở vị trí index
  - Input:
   * linked_list_t*: địa của của linked list cái mà chúng ta sẽ đi đọc giá trị của node ở vị trí index
   * int index: vị trí của node chúng ta muốn đọc
  - Ouput: int: giá trị của node mà chúng ta đọc được
*/
int GetValueIndex(linked_list_t* ll, int index)
{
	node_t* node_temp = ll->last_node;
	for (int i = ll->len-1; i > index; i--)
	{
		node_temp = node_temp->previous_node;
	}
	return node_temp->value;
}


void main()
{

	linked_list_t ll = { 0 };
	AddNodeToLinkList(&ll, 1);
	AddNodeToLinkList(&ll, 2);
	AddNodeToLinkList(&ll, 3);
	AddNodeToLinkList(&ll, 4);
	AddNodeToLinkList(&ll, 5);

	int x = GetValueIndex(&ll, 3);
}
