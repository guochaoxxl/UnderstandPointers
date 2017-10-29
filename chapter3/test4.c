#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* welcom(char *name){
	name = (char *)malloc(sizeof(char) * 20);
	printf("-----------in welcom------------\n");
	printf("please input your name: ");
	scanf("%s", name);
	printf("%s\n", name);
	strcat(name, ", welcom you!");

	printf("%s\n", name);
	printf("-----------in welcom------------\n");

	return name;
}

int main(int argc, char **argv)
{
	char *name;
	printf("your name: %s\n", welcom(name));

	return 0;
}
