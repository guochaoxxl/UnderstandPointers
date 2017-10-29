#include <stdio.h>

int main(int argc, char **argv)
{
	char *chunk;
	while(1){
		chunk = (char*)malloc(1000000000);
		printf("Allocating\n");
	}

	return 0;
}
