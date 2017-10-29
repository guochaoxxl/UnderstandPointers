#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test(int a, int b){
	char buffer[32];
	strcpy(buffer, "Hello, gdb");

	return;
}

int main(void)
{
	int var1;
	int var2;

	test(var1, var2);

	return 0;
}
