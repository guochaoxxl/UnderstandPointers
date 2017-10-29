#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *ptrInt1 = (int*)malloc(sizeof(int));
	char *ptrChar1 = (char*)malloc(sizeof(char));
	int *ptrInt2 = (int*)malloc(sizeof(int));
	char *ptrChar2 = (char*)malloc(sizeof(char));
	int *ptrInt3 = (int*)malloc(sizeof(int));
	char *ptrChar3 = (char*)malloc(sizeof(char));
	//int var1 = 2;
	//char cVar1 = 'a';
	//int var2 = 3;
	//char cVar2 = 'b';
	//int var3 = 4;
	//char cVar3 = 'c';
	//ptrInt1 = &var1;
	//ptrChar1 = &cVar1;
	//ptrInt2 = &var2;
	//ptrChar2 = &cVar2;
	//ptrInt3 = &var3;
	//ptrChar3 = &cVar3;
	*ptrInt1 = 2;
	*ptrInt2 = 3;
	*ptrInt3 = 4;
	*ptrChar1 = 'a';
	*ptrChar2 = 'b';
	*ptrChar3 = 'c';

	printf("ptrInt1:\t %p and value: %d\n", ptrInt1, *ptrInt1);
	printf("ptrChar1:\t %p and value: %c\n", ptrChar1, *ptrChar1);
	printf("ptrInt2:\t %p and value: %d\n", ptrInt2, *ptrInt2);
	printf("ptrChar2:\t %p and value: %c\n", ptrChar2, *ptrChar2);
	printf("ptrInt3:\t %p and value: %d\n", ptrInt3, *ptrInt3);
	printf("ptrChar3:\t %p and value: %c\n", ptrChar3, *ptrChar3);

	free(ptrInt1);
	free(ptrInt2);
	free(ptrInt3);
	free(ptrChar1);
	free(ptrChar2);
	free(ptrChar3);

	return 0;
}
