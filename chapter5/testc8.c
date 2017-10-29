#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *ptrArr1 = (char *)malloc(sizeof(char) * 15);
	ptrArr1 = "Hello";
	printf("ptrArr1: %s and %p\n", ptrArr1, ptrArr1);
	char *ptrArr2 = (char *)malloc(sizeof(char) * 25);
	strcat(ptrArr2, ptrArr1);
	printf("ptrArr2: %s and %p\n", ptrArr2, ptrArr2);
	strcat(ptrArr2, " World!");
	printf("ptrArr2: %s and %p\n", ptrArr2, ptrArr2);

	return 0;
}
