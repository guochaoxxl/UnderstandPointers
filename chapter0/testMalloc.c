#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	typedef struct student{
		char name[10];
		char class[6];
		char sex[2];
		char zhu;
		int age;
	} Student;

	Student stu;
	strcpy(stu.name, "zhangsan");
	strcpy(stu.class, "A1411");
	strcpy(stu.sex, "na");
	stu.zhu = 'n';
	stu.age = 19;

	printf("The stu information: \n");
	printf("Name:\t%s;\n", stu.name);
	printf("Class:\t%s;\n", stu.class);
	printf("Sex:\t%s;\n", stu.sex);
	printf("Age:\t%d;\n", stu.age);
	printf("Zhu:\t%c;\n", stu.zhu);

	printf("The struct stu'size is %d\n", sizeof(Student));

	return 0;
}
