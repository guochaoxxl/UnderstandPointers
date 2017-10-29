#include <stdio.h>

int main(int argc, char **argv)
{
	int arrInt[] = {1, 2, 3, 4, 5,};
	int size = sizeof(arrInt) / sizeof(int);
	for(int i = 0; i < size; i++){
		printf("arrInt[%d]: %d\t", i, arrInt[i]);
	}

	return 0;
}
