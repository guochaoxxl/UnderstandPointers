#include <stdio.h>

int main(int argc, char **argv)
{
	int var1 = 5;
	int *ptrVar = &var1;
	printf("The var1 is %d and address is %p\n", var1, &var1);
	printf("The *ptrVar is %d and ptrVar is %p and ptrVar address is %p\n", *ptrVar, ptrVar, &ptrVar);

	return 0;
}
