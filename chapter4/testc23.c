#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int size = 5;
	int* arrInt[size];
	for(int i = 0; i < size; i++){
		arrInt[i] = (int *)malloc(sizeof(int));
		*arrInt[i] = 101 + i;
		//*(*arrInt + i) = 101 + i;
	}

	for(int i = 0; i < size; i++){
		printf("%d\t", arrInt[i][0]);
		//printf("%d\t", *arrInt[i]);
		//printf("%d\t", *(*arrInt + i));
		//printf("%d\t", **arrInt + i);
	}

	return 0;
}
