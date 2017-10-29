#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *ptrArr1 = (char *)malloc(sizeof(char) * 10);
	strcpy(ptrArr1, "guochaoteacher");
	printf("ptrArr1: %s\n", ptrArr1);

	char *ptrArr2 = (char *)malloc(strlen("guochaoteacher") + 1);
	strcpy(ptrArr2, "guochaoteacher");
	printf("ptrArr2: %s\n", ptrArr2);

	return 0;
}
