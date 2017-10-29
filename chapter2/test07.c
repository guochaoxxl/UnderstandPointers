#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *name = (char *)malloc(strlen("zhangsan") + 1);
	strcpy(name, "zhangsan");
	char *ptrName = name;
	printf("name: %p\n", name);
	printf("ptrName: %p\n", ptrName);
	while(*name != 0){
		printf("%c", *name);
		name++;
	}
	printf("\n");
	printf("name: %p\n", name);
	printf("ptrName: %p\t", ptrName);
	free(ptrName);

	return 0;
}
