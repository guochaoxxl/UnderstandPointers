#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void displayWelcom(char *name){
	strcat(name, ", welcom you!");

	printf("%s\n", name);

	return;
}

int main(int argc, char **argv)
{
	char *name = (char *)malloc(sizeof(char) * 20);
	printf("Please input your name: ");
	scanf("%s", name);
	printf("Your name is: %s\n", name);

	printf("------------welcom--------------\n");
	displayWelcom(name);
	printf("------------welcom--------------\n");

	return 0;
}
