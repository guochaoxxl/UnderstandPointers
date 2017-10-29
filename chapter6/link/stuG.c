#include "stuG.h"

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
