#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *pc = (char*)malloc(sizeof(char) * 6);
	for(int i = 0; i < 18; i++){
		pc[i] = 97 + i;
	}
	for(int i = 0; i < 18; i++){
		printf("%c", pc[i]);
	}
	printf("\n");
	free(pc);

	return 0;
}
