#include <stdio.h>
#include <stdlib.h>

void display3DArray(int arr[][2][4], int rows){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < 2; j++){
			printf("{");
			for(int k = 0; k < 4; k++){
				printf("%d\t", arr[i][j][k]);
			}
			printf("}");
		}
		printf("\n");
	}
}

void display3DArray1(int (*ptrArr)[2][4], int rows){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < 2; j++){
			printf("{");
			for(int k = 0; k < 4; k++){
				printf("%d\t", *(*(*(ptrArr + i) + j) + k));
			}
			printf("}");
		}
		printf("\n");
	}
}

int main(int argc, char **argv)
{
	int matrix[3][2][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}}, {{9, 10, 11, 12}, {13, 14, 15, 16}}, {{17, 18, 19, 20}, {21, 22, 23, 24}}};

	display3DArray(matrix,  3);
	printf("\n");
	display3DArray1(matrix,  3);

	return 0;
}
