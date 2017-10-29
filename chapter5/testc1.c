#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *str1 = "Sound";
	char str2[] = {'S', 'o', 'u', 'n', 'd',};
	char *str3 = (char *)malloc(sizeof(char) * 5);
	strcpy(str3, "Sound");

	printf("*str1: %s\n", str1);
	printf("str2[]: %s\n", str2);
	printf("*str3: %s\n", str3);

	return 0;
}
