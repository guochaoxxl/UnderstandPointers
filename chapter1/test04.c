#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	//char **titles = {"A tale of two cities",
		//"Wuthering heights",
		//"Don quixote",
		//"Odyssey",
		//"Moby-Dick",
		//"Hamlet",
		//"Gulliver's travels",
	//};
	char **titles1 = (char*)malloc(sizeof("A tatle of two cities"));
	strcpy(titles1, "A tatle of two cities");
	char **titles2 = (char*)malloc(sizeof("Wuthering heights"));
	strcpy(titles2, "Wuthering heights");
	char **titles3 = (char*)malloc(sizeof("Don quixote"));
	strcpy(titles3, "Don quixote");
	char **titles4 = (char*)malloc(sizeof("Odyssey"));
	strcpy(titles4, "Odyssey");
	char **titles5 = (char*)malloc(sizeof("Moby-Dick"));
	strcpy(titles5, "Moby-Dick");
	char **titles6 = (char*)malloc(sizeof("Hamlet"));
	strcpy(titles6, "Hamlet");
	char **titles7 = (char*)malloc(sizeof("Gulliver's travels"));
	strcpy(titles7, "Gulliver's travels");
	char **titles[] = {**tltles1, **titles2, **titles3, **titles4, **titles5, **titles6, **titles7};

	char ***bestBooks;
	char ***englishBooks;

	bestBooks[0] = &titles[0];
	bestBooks[1] = &titles[3];
	bestBooks[2] = &titles[5];

	englishBooks[0] = &titles[0];
	englishBooks[1] = &titles[1];
	englishBooks[2] = &titles[5];
	englishBooks[3] = &titles[6];

	printf("The bestbook is %s\n", *bestBooks[0]);

	return 0;
}
