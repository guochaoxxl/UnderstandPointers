#include <stdio.h>

int add(int var1, int var2){
	return var1 + var2;
}

int sub(int var1, int var2){
	return var1 - var2;
}

int mul(int var1, int var2){
	return var1 * var2;
}

int div(int var1, int var2){
	return var1 / var2;
}

int mod(int var1, int var2){
	return var1 % var2;
}

void inputVar(int *var1, int *var2){
	printf("Please input var1: ");
	scanf("%d", var1);

	printf("Please input var2: ");
	scanf("%d", var2);

	return;
}

typedef int (*ptrCal)(int, int);

int resultCal(ptrCal cal, int var1, int var2){
	return cal(var1, var2);
}

int main(int argc, char **argv)
{
	int var1;
	int var2;
	inputVar(&var1, &var2);
	printf("The %d + %d = %d\n", var1, var2, resultCal(add, var1, var2));
	printf("The %d - %d = %d\n", var1, var2, resultCal(sub, var1, var2));
	printf("The %d * %d = %d\n", var1, var2, resultCal(mul, var1, var2));
	printf("The %d / %d = %d\n", var1, var2, resultCal(div, var1, var2));
	printf("The %d %% %d = %d\n", var1, var2, resultCal(mod, var1, var2));

	return 0;
}
