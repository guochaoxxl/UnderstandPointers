#include <stdio.h>

int main(int argc, char **argv)
{
	int (*arr1[]) = {
		(int[]){0, 1, 2,},
		(int[]){3, 4, 5,},
		(int[]){6, 7, 8,},
	};

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("(*arr1 + %d) + %d address: %p value: %d\n", i, j, (*(arr1 + i)) + j, *((*(arr1 + i)) + j));
		}
		printf("\n");
	}

	int (*arr2[]) = {
		(int[]){0, 1, 2, 3,},
		(int[]){4, 5,},
		(int[]){6, 7, 8,},
	};
	
	int row =0;
	for(int i = 0; i < 4; i++){
		printf("(*arr2 + %d) + %d address: %p value: %d\n", row, i, (*(arr2 + row)) + i, *((*(arr2 + row)) + i));
	}
	printf("\n");

	row++;
	for(int i = 0; i < 2; i++){
		printf("(*arr2 + %d) + %d address: %p value: %d\n", row, i, (*(arr2 + row)) + i, *((*(arr2 + row)) + i));
	}
	printf("\n");

	row++;
	for(int i = 0; i < 3; i++){
		printf("(*arr2 + %d) + %d address: %p value: %d\n", row, i, (*(arr2 + row)) + i, *((*(arr2 + row)) + i));
	}
	printf("\n");

	return 0;
}
