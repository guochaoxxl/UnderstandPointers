#include <stdio.h>

int fun1(int *ptrI){
	return *ptrI;
}

int main(void)
{
	int var1 = 9;

	printf("The fun1 value: %d\n", fun1(&var1));

	return 0;
}
