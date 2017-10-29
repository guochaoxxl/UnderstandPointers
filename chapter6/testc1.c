#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	struct _person{
		char firstName[10];
		char lastName[30];
		char title[100];
		int age;
	};

	struct _person person1;
	strcpy(person1.firstName, "guo");
	strcpy(person1.lastName, "zhumulama");
	strcpy(person1.title, "study hard every day!");
	person1.age = 39;
	
	printf("usual struct define:\n");
	printf("The person1 info:\n firstName: %s\n lastName: %s\n title: %s\n and age: %d\n", person1.firstName, person1.lastName, person1.title, person1.age);

	typedef struct person{
		char firstName[10];
		char lastName[30];
		char title[100];
		int age;
	} Person;

	Person person2;
	strcpy(person2.firstName, "zhang");
	strcpy(person2.lastName, "hangchao");
	strcpy(person2.title, "study hard every year!");
	person2.age = 42;
	
	printf("typedef struct define:\n");
	printf("The person2 info:\n firstName: %s\n lastName: %s\n title: %s\n and age: %d\n", person2.firstName, person2.lastName, person2.title, person2.age);

	return 0;
}
