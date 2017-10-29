#include <stdio.h>

int main(int argc, char **argv)
{
	int vector[5] = {1, 2, 3, 4, 5,};
	int *ptrVector = vector;
	int size = sizeof(vector)/sizeof(int);

	printf("Used arr:\n");
	for(int i = 0; i < size; i++){
		printf("vector[%d]: %d\n", i, vector[i]);
	}
	printf("\n");

	printf("Used ptr:\n");
	for(int i = 0; i < size; i++){
		printf("vector[%d]: %d\n", i, *(ptrVector + i));
	}
	printf("\n");

	printf("Special used arr:\n");
	for(int i = 0; i < size; i++){
		printf("vector[%d]: %d\n", i, i[vector]);
	}
	printf("\n");

	printf("Special used ptr:\n");
	for(int i = 0; i < size; i++){
		printf("vector[%d]: %d\n", i, *(i + ptrVector));
	}
	printf("\n");

	printf("The vector size: %d\n", size);

	return 0;
}
