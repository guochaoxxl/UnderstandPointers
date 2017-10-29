#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	typedef struct _person{
		char *firstName;
		char *lastName;
		char *title;
		int age;
	} Person;

	Person person1;
	person1.firstName = (char *)malloc(strlen("zhang") + 1);
	strcpy(person1.firstName, "zhang");
	person1.lastName = (char *)malloc(strlen("hangchao") + 1);
	strcpy(person1.lastName, "hangchao");
	person1.title= (char *)malloc(strlen("study hard every year!") + 1);
	strcpy(person1.title, "study hard every year!");
	person1.age = 42;
	
	printf("The person1 info:\n firstName: %s\n lastName: %s\n title: %s\n and age: %d\n", person1.firstName, person1.lastName, person1.title, person1.age);
	printf("\n");

	Person *ptrPerson = (Person *)malloc(sizeof(Person));
	(*ptrPerson).firstName = (char *)malloc(strlen("wangu") + 1);
	strcpy((*ptrPerson).firstName, "wangu");
	(*ptrPerson).lastName = (char *)malloc(strlen("chaohang") + 1);
	strcpy((*ptrPerson).lastName, "chaohang");
	(*ptrPerson).title= (char *)malloc(strlen("study hard every dayd!") + 1);
	strcpy((*ptrPerson).title, "study hard every dayd!");
	(*ptrPerson).age = 42;
	
	printf("The (*ptrPerson). info:\n firstName: %s\n lastName: %s\n title: %s\n and age: %d\n", (*ptrPerson).firstName, (*ptrPerson).lastName, (*ptrPerson).title, (*ptrPerson).age);
	printf("\n");

	Person *ptrPerson1 = (Person *)malloc(sizeof(Person));
	ptrPerson1->firstName = (char *)malloc(strlen("wangu") + 1);
	strcpy((*ptrPerson1).firstName, "wangu");
	ptrPerson1->lastName = (char *)malloc(strlen("chaohang") + 1);
	strcpy((*ptrPerson1).lastName, "chaohang");
	ptrPerson1->title= (char *)malloc(strlen("study hard every dayd!") + 1);
	strcpy((*ptrPerson1).title, "study hard every dayd!");
	ptrPerson1->age = 42;
	
	printf("The ptrPerson1-> info:\n firstName: %s\n lastName: %s\n title: %s\n and age: %d\n", ptrPerson1->firstName, ptrPerson1->lastName, ptrPerson1->title, ptrPerson1->age);
	printf("\n");

	return 0;
}
