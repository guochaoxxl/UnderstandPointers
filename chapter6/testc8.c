#include <stdio.h>
#include <stdlib.h>

typedef struct _student{
	char *name;
	char *address;
	int age;
	short id;
	char sex;
} Student;

typedef struct _node{
	Student *ptrStu;
	struct _node *next;
} Node;

typedef struct _linkedList{
	Node *head;
	Node *tail;
	Node *current;
} LinkedList;

void initializeStudent(LinkedList *ptrLinkedList){
	ptrLinkedList->head = NULL;
	ptrLinkedList->tail = NULL;
	ptrLinkedList->current = NULL;

	return;
}

void addHead(LinkedList *ptrLinkedList, Student *ptrStudent){
	Node *ptrNode = (Node *)malloc(sizeof(Node));
	strcpy(Node->ptrStu, ptrStudent);
	if(ptrLinkedList->head == NULL){
		ptrLinkedList->tail = ptrNode;
		ptrNode->next = NULL;
	}else{
		ptrNode->next = ptrLinkedList->head;
	}
	ptrLinkedList->head = ptrNode;

	return;
}

void addTail(LinkedList *ptrLinkedList, Student *ptrStudent){
	Node *ptrNode = (Node *)malloc(sizeof(Node));
	strcpy(Node->ptrStu, ptrStudent);
	Node->next = NULL;
	if(ptrLinkedList->head == NULL){
		ptrLinkedList->head = ptrNode;
	}else{
		ptrLinkedList->tail->next = ptrNode;
	}
	ptrLinkedList->tail = ptrNode;

	return;
}

Node *getNode()
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
	free(student);
	
	return;
}

int main(int argc, char **argv)
{
	Student *student = (Student *)malloc(sizeof(Student));
	initializeStudent(student, "zhangsan", "jiangxijiujiang", 20, 1102, 'M');
	displayStudent(student);
	deallocateStudent(student);

	return 0;
}
