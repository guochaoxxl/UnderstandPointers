#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void displayUpper(char *name){
	int size = strlen(name);
	for (int i = 0; i < size; i++){
		*(name + i) = toupper(*(name + i));
	}
	printf("%s\n", name);

	return;
}

int main(int argc, char **argv)
{
	char *name = (char *)malloc(sizeof(char) * 20);
	printf("Please input your name: ");
	scanf("%s", name);
	printf("Your name is: %s\n", name);

	printf("------------uppername--------------\n");
	displayUpper(name);
	printf("------------uppername--------------\n");

	printf("Your name is: %s\n", name);

	return 0;
}
