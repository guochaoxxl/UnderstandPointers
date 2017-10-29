#include <stdio.h>
#define arrSize 7

int main(int argc, char **argv)
{
	int arr1[4] = {1, 2, 3, 4};
	int arr2[4] = {6, 7, 8, 9};
	printf("The arr1 is %p and arr2 is %p\n", arr1, arr2);
	int *ptrArr = arr1;
	for(int i = 0; i < arrSize; i++){
		printf("%d\t", *(ptrArr + i));
	}
	printf("\n");

	return 0;
}
