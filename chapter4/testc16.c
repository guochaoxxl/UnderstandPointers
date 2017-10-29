#include <stdio.h>

int main(int argc, char **argv)
{
	int matrix[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
	int (*ptrMatrix)[5] = matrix;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			printf("matrix[%d][%d] address: %p and value: %d\n", i, j, &matrix[i][j], matrix[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			printf("matrix[%d][%d] address: %p and value: %d\n", i, j, *(ptrMatrix + i) + j, *(*(ptrMatrix + i) + j));
		}
		printf("\n");
	}

	return 0;
}
