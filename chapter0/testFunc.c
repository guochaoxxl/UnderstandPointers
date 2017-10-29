#include <stdio.h>

int fun1(int var1){
	int a = 3;
	printf("a in fun1 is %d!\n", a);

	return var1;
}

int fun2(int var1){
	int a = 4;
	int b = 6;
	int c = 9;
	printf("a in fun2 is %d!\n", a);
	printf("b and c in fun2 is %d and %d!\n", b, c);

	return fun1(var1);
}

int fun3(int var1){
	int a = 5;
	int b = 7;
	int c = 10;
	int d = 11;
	int e = 12;

	printf("a in fun3 is %d!\n", a);
	printf("b and c in fun3 is %d and %d!\n", b, c);
	printf("d and e in fun3 is %d and %d!\n", d, e);

	return fun2(var1);
}

int main(int argc, char *argv[])
{
	int var1 = 999;
	printf("The var1 is %d\n", var1);
	printf("The starting!\n");
	printf("The fun1(var1): %d\n", fun1(var1));
	printf("-----------------------------------\n");
	printf("The fun2(var1): %d\n", fun2(var1));
	printf("-----------------------------------\n");
	printf("The fun3(var1): %d\n", fun3(var1));
	printf("-----------------------------------\n");
	printf("The ending!\n");

	return 0;
}
