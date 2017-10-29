#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _student{
	char *name;
	char *address;
	int age;
	short id;
	char sex;
} Student;

void initializeStudent(Student *student, const char *nameg, const char *addressg, const int ageg, const short idg, const char sexg){
	student->name = (char *)malloc(strlen(nameg) + 1);
	strcpy(student->name, nameg);
	student->address = (char *)malloc(strlen(addressg) + 1);
	strcpy(student->address, addressg);
	student->age = ageg;
	student->id = idg;
	student->sex = sexg;

	return;
}

void displayStudent(Student *student){
	printf("student %s info:\n", student->name);
	printf("student.name: %s\n", student->name);
	printf("student.address: %s\n", student->address);
	printf("student.age: %d\n", student->age);
	printf("student.id: %d\n", student->id);
	printf("student.sex: %c\n", student->sex);
	printf("\n");

	return;
}

void deallocateStudent(Student *student){
	free(student->name);
	free(student->address);
	
	return;
}

int main(int argc, char **argv)
{
	Student student;
	initializeStudent(&student, "zhangsan", "jiangxijiujiang", 20, 1102, 'M');
	displayStudent(&student);
	deallocateStudent(&student);

	return 0;
}
