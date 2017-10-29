#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *arr1 = "Sound";
	char arr[6] = {'S', 'o', 'u', 'n', 'd',};
	char *arr2 = arr;
	char *arr3 = (char *)malloc(sizeof(char) * 6);
	*(arr3 + 0) = 'S';
	*(arr3 + 1) = 'o';
	*(arr3 + 2) = 'u';
	*(arr3 + 3) = 'n';
	*(arr3 + 4) = 'd';
	*(arr3 + 5) = '\0';
	char *arr4 = (char *)malloc(sizeof(char) * 6);
	strcpy(arr4, "Sound");

	printf("arr1: %s\n", arr1);
	printf("arr2: %s\n", arr2);
	printf("arr3: %s\n", arr3);
	printf("arr4: %s\n", arr4);

	return 0;
}
