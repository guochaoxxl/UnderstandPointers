#include <stdio.h>

int fun(int var1, int var2, int var3){
	int sum = 0;
	sum = var1 + var2 + var3;

	return sum;
}

int main(int argc, char *argv[])
{
	int var1 = 9;
	int var2 = 7;

	printf("haha %d and %d is %d\n", var1, var2, fun(var1, var2, 3));

	return 0;
}
