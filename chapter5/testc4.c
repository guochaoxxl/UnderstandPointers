#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char arrCh1[] = "Sound";
	char arrCh2[6] = {'S', 'o', 'u', 'n', 'd',};
	char arrCh3[6];
	arrCh3[0] = 'S';
	arrCh3[1] = 'o';
	arrCh3[2] = 'u';
	arrCh3[3] = 'n';
	arrCh3[4] = 'd';
	arrCh3[5] = '\0';
	char arrCh4[6];
	strcpy(arrCh4, "Sound");

	printf("arrCh1: %s\n", arrCh1);
	printf("arrCh2: %s\n", arrCh2);
	printf("arrCh3: %s\n", arrCh3);
	printf("arrCh4: %s\n", arrCh4);

	return 0;
}
