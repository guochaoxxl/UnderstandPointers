#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIST_SIZE 10

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

Student *listStu[LIST_SIZE];

void initializeListStu(){
	for(int i = 0; i < LIST_SIZE; i++){
		listStu[i] = NULL;
	}
}

Student *getStudent(){
	for(int i = 0; i < LIST_SIZE; i++){
		if(listStu[i] != NULL){
			Student *stu = listStu[i];
			listStu[i] = NULL;

			return stu;
		}
	}
	Student *student = (Student *)malloc(sizeof(Student));

	return student;
}

Student *returnStudent(Student *student){
	for(int i = 0; i < LIST_SIZE; i++){
		if(listStu[i] == NULL){
			listStu[i] = student;

			return student;
		}
	}
	deallocateStudent(student);
	free(student);

	return NULL;
}

int main(int argc, char **argv)
{ 
	initializeListStu();
	Student *student;
	student = getStudent();

	initializeStudent(student, "zhangsan", "jiangxijiujiang", 20, 1102, 'M');
	displayStudent(student);
	returnStudent(student);

	return 0;
}
