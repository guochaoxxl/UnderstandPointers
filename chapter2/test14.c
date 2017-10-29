#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *ptrInt = (int *)malloc(sizeof(int) * 6);
	int size = 6;
	for(int i = 0; i < size; i++){
		*(ptrInt + i) = 90 + i;
	}

	for(int i = 0; i < size; i++){
		printf("ptrInt[%d]: %d\t", i, *(ptrInt + i));
	}
//	free(ptrInt);

	return 0;
}
