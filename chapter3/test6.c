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

ptrCal resultCal(char *ch){
	ptrCal cal1;
	printf("Please input ch: ");
	scanf("%c", ch);

	switch(*ch){
		case '+':
			cal1 = add;
			break;

		case '-':
			cal1 = sub;
			break;

		case '*':
			cal1 = mul;
			break;

		case '/':
			cal1 = div;
			break;

		case '%':
			cal1 = mod;
			break;

		default:
			printf("you can select:+ - * / %!\n");
	}

	return cal1;
}

int main(int argc, char **argv)
{
	ptrCal cal2;
	int var1;
	int var2;
	char ch;
	inputVar(&var1, &var2);
	getchar();
	cal2 = resultCal(&ch);
	printf("The %d %c %d = %d\n", var1, ch, var2, cal2(var1, var2));

	return 0;
}
