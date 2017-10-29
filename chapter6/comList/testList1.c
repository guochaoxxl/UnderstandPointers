#include "list.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	List *list2 = (List *)malloc(sizeof(List));
	initList(list2);
	addTail(list2, 1);
	addTail(list2, 3);
	addTail(list2, 5);
	addTail(list2, 7);
	addTail(list2, 9);
	dispList(list2);

	List *list1 = (List *)malloc(sizeof(List));
	initList(list1);
	addHead(list1, 1);
	addHead(list1, 3);
	addHead(list1, 5);
	addHead(list1, 7);
	addHead(list1, 9);
	dispList(list1);

	return 0;
}
