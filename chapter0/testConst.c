#include <stdio.h>

int main(int argc, char **argv)
{
	int var1 = 100;
	int var2 = 200;
	const int var3 = 300;
	printf("var1 value %d, var2 value %d, var3 value %d\n", var1, var2, var3);
	printf("var1 address %p, var2 address %p, var3 address %p\n", &var1, &var2, &var3);

	return 0;
}
