#include <stdio.h>

int main(int argc, char **argv)
{
	int iVar = 19;
	int *ptrVar1 = &iVar;
	int* ptrVar2 = &iVar;
	int * ptrVar3 = NULL;
	ptrVar3 = &iVar;

	printf("the iVar is %d and address is %p\n", iVar, &iVar);
	printf("the ptrVar1 is %p and *ptrVar1 is %d\n", ptrVar1, *ptrVar1);
	printf("the ptrVar2 is %p and *ptrVar2 is %d\n", ptrVar2, *ptrVar2);
	printf("the ptrVar3 is %p and *ptrVar3 is %d\n", ptrVar3, *ptrVar3);

	iVar++;
	printf("the iVar is %d and address is %p\n", iVar, &iVar);
	(*ptrVar1)++;
	printf("the ptrVar1 is %p and *ptrVar1 is %d\n", ptrVar1, *ptrVar1);
	(*ptrVar2)++;
	printf("the ptrVar2 is %p and *ptrVar2 is %d\n", ptrVar2, *ptrVar2);
	(*ptrVar3)++;
	printf("the ptrVar3 is %p and *ptrVar3 is %d\n", ptrVar3, *ptrVar3);

	return 0;
}
