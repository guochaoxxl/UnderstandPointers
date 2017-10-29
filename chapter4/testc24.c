#include <stdio.h>
#include <stdlib.h>

int* initArr(int size){
	int **arrInt;
	*arrInt = (int *)malloc(sizeof(int));
	for(int i = 0; i < size; i++){
		*(*arrInt + i) = 101 + i;
	}

	return *arrInt;
}

void displaArr(int **arrInt, int size){
	for(int i = 0; i < size; i++){
		printf("%d\t", **arrInt + i);
	}

	return;
}

int main(int argc, char **argv)
{
	int size = 6;
	int **arrInt;
	arrInt = initArr(size);

	//displayArr(arrInt, size);
	for(int i = 0; i < size; i++){
		printf("%d\t", *(*arrInt + i));
	}

	return 0;
}
