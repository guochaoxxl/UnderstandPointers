#include <stdio.h>

int main(int argc, char **argv)
{
	int (*(arr1[])) = {
		(int[]){0, 1, 2, 3,},
		(int[]){4, 5,},
		(int[]){6, 7, 8,},
	};

	int col[] = {4, 2, 3,};

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < col[i]; j++){
			printf("arr1[%d][%d] address: %p value: %d\n", i,j, *(arr1 + i) + j, *(*(arr1 + i) + j));
		}
		printf("\n");
	}

	return 0;
}
