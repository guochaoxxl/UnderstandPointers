#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _student{
	char *name;
	short id;
	double record;
	char sex;
} Student;

Student *initStudent(int i){
	Student *ptrStu = (Student *)malloc(sizeof(Student));
	ptrStu->name = (char *)malloc(sizeof(char) * 20);
	printf("Input the %d'th student info: \n", i + 1);
	printf("name: ");
	scanf("%s", ptrStu->name);
	printf("id: ");
	scanf("%d", &ptrStu->id);
	printf("record: ");
	scanf("%lf", &ptrStu->record);
	int tmp = getchar();
	printf("sex: ");
	scanf("%c", &ptrStu->sex);

	return ptrStu;
}

void deleteStudent(Student *ptrStu){
	free(ptrStu->name);
	free(ptrStu);

	return;
}

void displayStudent(Student *ptrStu){
	if(strlen(ptrStu->name) < 4){
		printf("The student %s's info:\t\t\t", ptrStu->name);
	}else{
		if(strlen(ptrStu->name) < 8){
			printf("The student %s's info:\t\t", ptrStu->name);
		}else{
			printf("The student %s's info:\t", ptrStu->name);
		}
	}
	printf("name: %s\t", ptrStu->name);
	printf("id: %d\t", ptrStu->id);
	printf("record: %f\t", ptrStu->record);
	printf("sex: %c\n", ptrStu->sex);

	return;
}

int main(int argc, char **argv)
{
	int size;
	printf("please input the size: ");
	scanf("%d", &size);
	Student *arrStudent[size];
	for(int i = 0; i < size; i++){
		arrStudent[i] = initStudent(i);
	}
	for(int i = 0; i < size; i++){
		displayStudent(arrStudent[i]);
	}
	for(int i = 0; i < size; i++){
		deleteStudent(arrStudent[i]);
	}
	printf("test finished!\n");

	return 0;
}
