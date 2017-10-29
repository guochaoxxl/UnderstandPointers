#include <stdio.h>

int main(int argc, char **argv)
{
	int matrix[2][5] = {{1, 2, 3, 4, 5,},{6, 7, 8, 9, 10,},};
	int (*pMatrix)[5] = matrix;

	printf("matrix: %p\n", matrix);
	printf("matrix + 1: %p\n", matrix + 1);

	printf("*pMatrix + 1: %p and *(*pMatrix + 1): %d\n", *pMatrix + 1, *(*pMatrix + 1));

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			printf("*(pMatrix + %d) + %d: %p and *(*(pMatrix + %d) + %d): %d\n", i, j, *(pMatrix + i) + j, i, j, *(*(pMatrix + i) + j));
		}
	}
	return 0;
}
