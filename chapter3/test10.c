#include <stdio.h>

int main(int argc, char **argv)
{
	int arrInt[] = {1, 2, 3, 4, 5,};
	int size = sizeof(arrInt) / sizeof(int);

	printf("The arrInt address: %p and arrInt[0] address: %p\n", &arrInt, &arrInt[0]);

	for(int i = 0; i <= size - 1; i++){
		printf("arrInt[%d]: %d and address: %p\n", i, arrInt[i], &arrInt[i]);
	}

	return 0;
}
