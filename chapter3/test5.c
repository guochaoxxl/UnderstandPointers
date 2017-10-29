#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char* guoUpper(char *name){
	name = (char *)malloc(sizeof(char) * 20);
	printf("-----------in guoUpper------------\n");
	printf("Please input your name: ");
	scanf("%s", name);
	printf("Your name is: %s\n", name);

	int size = strlen(name);
	for (int i = 0; i < size; i++){
		*(name + i) = toupper(*(name + i));
	}
	printf("%s\n", name);
	printf("-----------in guoUpper------------\n");

	return name;
}

int main(int argc, char **argv)
{
	char *name;

	printf("Your name is: %s\n", guoUpper(name));

	return 0;
}
