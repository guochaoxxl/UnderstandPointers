#include <stdio.h>

void add(int var1, int var2){
	printf("the %d add %d is %d\n", var1, var2, var1 + var2);

	return;
}

void sub(int var1, int var2){
	printf("the %d  sub %d is %d\n", var1, var2, var1 - var2);

	return;
}

void mul(int var1, int var2){
	printf("the %d mul %d is %d\n", var1, var2, var1 * var2);

	return;
}

void div(int var1, int var2){
	printf("the %d div %d is %d\n", var1, var2, var1 / var2);

	return;
}

void mod(int var1, int var2){
	printf("the %d mod %d is %d\n", var1, var2, var1 % var2);

	return;
}

int main(int argc, char **argv)
{
	void (*ptrCal)(int var1, int var2);
	char sel;
	printf("please input cal sel:");
	scanf("%c", &sel);
	int tmp = getchar();
	switch(sel){
		case '+':
			ptrCal = add;
			break;

		case '-':
			ptrCal = sub;
			break;
			
		case '*':
			ptrCal = mul;
			break;

		case '/':
			ptrCal = div;
			break;
			
		case '%':
			ptrCal = mod;
			break;

		default:
			printf("Error!\n");
	}

	ptrCal(19, 8);

	return 0;
}
