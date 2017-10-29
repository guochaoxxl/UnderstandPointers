#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _student{
	short id;
	char *name;
	int age;
	double record;
	char sex;
} Student;

void initializeStudent(int size, Student *student, const short *iId, const char **iName, const int *iAge, const double *iRecord, const char *iSex){
	for(int i = 0; i < size; i++){
		student->id = *(iId + i);
		student->name = (char *)malloc(strlen(iName) + 1);
		strcpy(student->name, (*iName + i));
		student->age = *(iAge + i);
		student->record = *(iRecord + i);
		student->sex = *(iSex + i);
	}

	return;
}

void displayStudent(Student *ptrStudent){
	printf("%s's infor: id: %d, name: %s, age: %d, record: %f and sex: %c\n", ptrStudent->name, ptrStudent->id, ptrStudent->name, ptrStudent->age, ptrStudent->record, ptrStudent->sex);

	return;
}

int compareStudentAge(Student *ptrStudent1, Student *ptrStudent2){
	if(ptrStudent1->age - ptrStudent2->age >= 0){
		return ptrStudent1->age - ptrStudent2->age;
	}else{
		return ptrStudent2->age - ptrStudent1->age;
	}
}

int compareStudentId(Student *ptrStudent1, Student *ptrStudent2){
	if(ptrStudent1->id - ptrStudent2->id >= 0){
		return ptrStudent1->id - ptrStudent2->id;
	}else{
		return ptrStudent2->id - ptrStudent1->id;
	}
}

int compareStudentName(Student *ptrStudent1, Student *ptrStudent2){
	return strcmp(ptrStudent1->name, ptrStudent2->name);
}

int compareStudentRecord(Student *ptrStudent1, Student *ptrStudent2){
	return (ptrStudent1->record - ptrStudent2->record) >= 0.000001 ? (int)(ptrStudent1->record - ptrStudent2->record) : (int)(ptrStudent2->record - ptrStudent1->record);
}

typedef struct _node{
	Student *ptrStu;
	struct _node *next;
} Node;

typedef struct _linkedList{
	Node *head;
	Node *tail;
	Node *current;
} LinkedList;

//初始化链表
void initializeLinkedList(LinkedList *ptrLinkedList){
	ptrLinkedList->head = NULL;
	ptrLinkedList->tail = NULL;
	ptrLinkedList->current = NULL;

	return;
}

//头部插入法
void addHead(LinkedList *ptrLinkedList, Student *ptrStudent){
	Node *ptrNode = (Node *)malloc(sizeof(Node));
	strcpy(ptrNode->ptrStu, ptrStudent);
	ptrNode->next = NULL;
	if(ptrLinkedList->head == NULL){
		ptrLinkedList->tail = ptrNode;
	}else{
		ptrNode->next = ptrLinkedList->head;
	}
	ptrLinkedList->head = ptrNode;

	return;
}

//尾部插入法
void addTail(LinkedList *ptrLinkedList, Student *ptrStudent){
	Node *ptrNode = (Node *)malloc(sizeof(Node));
	strcpy(ptrNode->ptrStu, ptrStudent);
	ptrNode->next = NULL;
	if(ptrLinkedList->head == NULL){
		ptrLinkedList->head = ptrNode;
	}else{
		ptrLinkedList->tail->next = ptrNode;
	}
	ptrLinkedList->tail = ptrNode;

	return;
}

typedef int (*Compare)(void *, void *);

Node *getNode(LinkedList *ptrLinkedList, Compare compare, Student *ptrStudent){
	Node *node = ptrLinkedList->head;
	while(node != NULL){
		if(compare(node->ptrStu, ptrStudent) == 0){
			return node;
		}
		node = node->next;
	}

	return NULL;
}

void delete(LinkedList *ptrLinkedList, Node *node){
	if(node == ptrLinkedList->head){
		if(ptrLinkedList->head->next == NULL){
			ptrLinkedList->head = ptrLinkedList->tail = NULL;
		}else{
			ptrLinkedList->head = ptrLinkedList->head->next;
		}
	}else{
		Node *tmp = ptrLinkedList->head;
		while(tmp != NULL && tmp->next != node){
			tmp = tmp->next;
		}
		if(tmp != NULL){
			tmp->next = node->next;
		}
	}
	free(node);

	return;
}

typedef void (*Display)(void *);

void displayLinkedList(LinkedList *ptrLinkedList, Display display){
	printf("\n LinkedList \n");
	Node *current = ptrLinkedList->head;
	while(current != NULL){
		display(current->ptrStu);
		current = current->next;
	}
	printf("\n \\LinkedList \\\n");

	return;
}

void deallocateStudent(Student *student){
	free(student->name);
	free(student);
	
	return;
}

int main(int argc, char **argv)
{
	int size;
	printf("please input size: ");
	scanf("%d", size);
	Student *studentArr[size]
	for(int i = 0; i < size; i++){
		Student *studentArr[size] = (Student *)malloc(sizeof(Student));

	}
	initializeStudent(1, student, 1102, "zhangsan", 20, 78.5f, 'M');
	displayStudent(student);
	deallocateStudent(student);

	return 0;
}
