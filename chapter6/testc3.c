#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	typedef struct _student1{
		char *name;
		char *address;
		int age;
		short id;
		bool sex;
		char se0;
	} Student1;
	
	typedef struct _student2{
		char *name;
		char *address;
		int age;
		bool sex;
		short id;
		char se0;
	} Student2;
	
	typedef struct _student3{
		char se0;
		char *name;
		bool sex;
		char *address;
		int age;
		short id;
	} Student3;
	
	Student1 *ptrStu1;
	printf("Student1 size: %d\n", sizeof(Student1));
	printf("Student2 size: %d\n", sizeof(Student2));
	printf("Student3 size: %d\n", sizeof(Student3));

	return 0;
}
