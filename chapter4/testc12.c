#include <stdio.h>
#include <stdlib.h>

void display2DArray(int rows, int line, int arr[][line]){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < line; j++){
			printf("%p: %d\n", &arr[i][j], arr[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char **argv)
{
	int rows = 2;
	int columns = 5;
	int **matrix = (int **)malloc(rows * sizeof(int *));
	for(int i = 0; i < rows; i++){
		matrix[i] = (int *)malloc(columns * sizeof(int));
	}
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			//*(*(matrix + i) + j) = i * 5 + j;
			matrix[i][j] = i * 5 + j + 1;
		}
	}

	int matrix1[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10},};
	display2DArray(rows, columns, matrix);

	return 0;
}
