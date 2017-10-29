#include <stdio.h>

int main(int argc, char **argv)
{
	int vector[5] = {1, 2, 3, 4, 5,};
	int *pv = vector;
	int *pva = &vector;
	int *pvf = &vector[0];

	printf("pv value: %p address: %p\n", pv, &pv);
	printf("pva value: %p address: %p\n", pva, &pva);
	printf("pvf value: %p address: %p\n", pvf, &pvf);
	printf("the vector size: %d\n", sizeof(vector)/sizeof(int));

	printf("after++:\n");
	pv++;
	printf("the pv is: %p\t", pv);
	printf("the *pv is: %d\n", *pv);
	pva++;
	printf("the pva is: %p\t", pva);
	printf("the *pva is: %d\n", *pva);
	pvf++;
	printf("the pvf is: %p\t", pvf);
	printf("the *pvf is: %d\n", *pvf);

	printf("after++:\n");
	pv++;
	printf("the pv is: %p\t", pv);
	printf("the *pv is: %d\n", *pv);
	pva++;
	printf("the pva is: %p\t", pva);
	printf("the *pva is: %d\n", *pva);
	pvf++;
	printf("the pvf is: %p\t", pvf);
	printf("the *pvf is: %d\n", *pvf);

	return 0;
}
