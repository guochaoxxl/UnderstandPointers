#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *name;
	name = malloc(sizeof(char) * 20);
	printf("Enter your name: ");
	scanf("%s", name);
	printf("%s\n", name);
	
	char *like;
	like = malloc(sizeof(char) * 20);
	printf("Enter your like: ");
	scanf("%s", like);
	printf("%s\n", like);

	return 0;
}
