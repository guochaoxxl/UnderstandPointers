#include <stdio.h>

void displayArr(int arr[], int size){
	for(int i = 0; i < size; i++){
		//printf("%d\t", arr[i]);
		printf("%d\t", *(arr + i));
	}
	printf("\n");

	return;
}

int main(int argc, char **argv)
{
	int arrInt[] = {1, 2, 3, 4, 5, 6, 7, 8,};
	int size = sizeof(arrInt) / sizeof(int);
	displayArr(arrInt, size);

	return 0;
}
