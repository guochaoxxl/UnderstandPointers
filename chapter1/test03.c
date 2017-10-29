#include <stdio.h>

int main(int argc, char **argv)
{
	char *titles[] = {"A tale of two cities",
		"Wuthering heights",
		"Don quixote",
		"Odyssey",
		"Moby-Dick",
		"Hamlet",
		"Gulliver's travels",
	};
	char **bestBooks[3];
	char **englishBooks[4];

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
