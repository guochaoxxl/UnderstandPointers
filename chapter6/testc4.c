#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	typedef struct _student{
		char *name;
		char *address;
		int age;
		short id;
		bool sex;
	} Student;
	
	Student stu;
	stu.name = (char *)malloc(strlen("zhangsan") + 1);
	strcpy(stu.name, "zhangsan");
	stu.address = (char *)malloc(strlen("jiangxijiujiang") + 1);
	strcpy(stu.name, "jiangxijiujiang");
	stu.age = 20;
	stu.id = 1102;
	stu.sex = true;

	printf("stu inf: ");
	printf("stu.name: %s\n", stu.name);
	printf("stu.address: %s\n", stu.address);
	printf("stu.age: %d\n", stu.age);
	printf("stu.id: %d\n", stu.id);
	printf("stu.sex: %d\n", stu.sex);
	printf("\n");

	Student *ptrStu;
	ptrStu = (Student *)malloc(sizeof(Student));
	ptrStu->name = (char *)malloc(strlen("lisi") + 1);
	strcpy(ptrStu->name, "lisi");
	ptrStu->address = (char *)malloc(strlen("jiangxishangrao") + 1);
	strcpy(ptrStu->address, "jiangxishangrao");
	ptrStu->age = 29;
	ptrStu->id = 2109;
	ptrStu->sex = false;

	printf("ptrStu inf: ");
	printf("ptrStu.name: %s\n", ptrStu->name);
	printf("ptrStu.address: %s\n", ptrStu->address);
	printf("ptrStu.age: %d\n", ptrStu->age);
	printf("ptrStu.id: %d\n", ptrStu->id);
	printf("ptrStu.sex: %d\n", ptrStu->sex);
	printf("\n");
	free(ptrStu->name);
	free(ptrStu->address);
	free(ptrStu);

	return 0;
}
