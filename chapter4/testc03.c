#include <stdio.h>

void displayArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");

	return;
}

void displayArray1(int *arr, int size){
	for(int i = 0; i < size; i++){
		printf("%d\t", *(arr + i));
	}
	printf("\n");

	return;
}

int main(int argc, char **argv)
{
	int vector[] = {1, 2, 3, 4, 5,};
	displayArray(vector, 5);

	return 0;
}
