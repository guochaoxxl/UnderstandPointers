#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *pi = (int *)malloc(sizeof(int));
	*pi = 6;
	printf("the pi is %p and *p is %d\n", pi, *pi);
	free(pi);
	pi = (int *)malloc(sizeof(int));
	*pi = 6;
	printf("the pi is %p and *p is %d\n", pi, *pi);
	free(pi);

	return 0;
}
