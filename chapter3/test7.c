#include <stdio.h>

int main(int argc, char **argv)
{
	int var1;
	printf("please input a muber: ");
	scanf("%d", &var1);
	getchar();
	char ch;
	printf("please input a char: ");
	scanf("%c", &ch);

	printf("You input the number: %d and char: %c\n", var1, ch);

	return 0;
}
