#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef stuG_h
#define stuG_h

typedef struct _student{
	char *name;
	short id;
	double record;
	char sex;
} Student;

Student *initStudent(int);
void deleteStudent(Student *);
void displayStudent(Student *);

#endif
