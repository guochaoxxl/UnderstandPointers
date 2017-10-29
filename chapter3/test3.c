#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void displayWelcom(const char *name){
	strcat(name, ", welcom you!");

	printf("------------welcom--------------\n");
	printf("%s\n", name);
	printf("------------welcom--------------\n");

	return;
}

void displayUpper(char *name){
	int size = strlen(name);
	for (int i = 0; i < size; i++){
		*(name + i) = toupper(*(name + i));
	}
	printf("------------uppername--------------\n");
	printf("%s\n", name);
	printf("------------uppername--------------\n");

	return;
}

int main(int argc, char **argv)
{
	char *name = (char *)malloc(sizeof(char) * 20);
	printf("Please input your name: ");
	scanf("%s", name);
	printf("Your name is: %s\n", name);

	displayUpper(name);
	displayWelcom(name);

	printf("Your name is: %s\n", name);

	return 0;
}
