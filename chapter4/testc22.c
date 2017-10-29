#include <stdio.h>
#include <stdlib.h>

void displayArr(int **arr, int size){
	for(int i = 0; i < size; i++){
		printf("%d\t", *(*arr + i));
	}
	printf("\n");

	return;
}

int main(int argc, char **argv)
{
	int size = 6;
	int* arrInt[size];
	for(int i = 0; i < size; i++){
		*(arrInt + i) = (int *)malloc(sizeof(int));
		*(*arrInt + i) = i + 1;
	}
	displayArr(arrInt, size);

	return 0;
}
