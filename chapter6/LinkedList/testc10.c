#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _student{
	char *name;
	short id;
	int age;
	char sex;
	double record;
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

void initStudent(Student *ptrStudent, const char *iName, const short iId, const int iAge, const char iSex, const double iRecord){
	ptrStudent->name = (char *)malloc(strlen(iName) + 1);
	strcpy(ptrStudent->name, iName);
	ptrStudent->id = iId;
	ptrStudent->age = iAge;
	ptrStudent->sex = iSex;
	ptrStudent->record = iRecord;

	return;
}

void displayStudent(Student *ptrStudent){
	printf("%s's info: name: %s, id: %d, age: %d, sex: %c, record: %f\n", ptrStudent->name, ptrStudent->name, ptrStudent->id, ptrStudent->age, ptrStudent->sex, ptrStudent->record);

	return;
}

int compareName(Student *ptrStudent1, Student *ptrStudent2){
	return strcpy(ptrStudent1, ptrStudent2);
}

int compareId(Student *ptrStudent1, Student *ptrStudent2){
	if(ptrStudent1->id - ptrStudent2->id >= 0){
		return ptrStudent1->id - ptrStudent2->id;
	}else{
		return ptrStudent2->id - ptrStudent1->id;
	}
}

int compareAge(Student *ptrStudent1, Student *ptrStudent2){

		return ptrStudent1->age - ptrStudent2->age >= 0 ? ptrStudent1->age - ptrStudent2->age : ptrStudent2->age - ptrStudent1->age;
}

int compareRecord(Student *ptrStudent1, Student *ptrStudent2){
	if(ptrStudent1->record - ptrStudent2->record >= 0.000001){
		return ptrStudent1->record - ptrStudent2->record;
	}else{
		return ptrStudent2->record - ptrStudent1->record;
	}
}

//初始化链表
void initLinkedList(LinkedList *ptrLinkedList){
	ptrLinkedList->head = NULL;
	ptrLinkedList->tail = NULL;
	ptrLinkedList->current = NULL;

	return;
}

//头部插入法
void addHead(LinkedList *ptrLinkedList, Student *ptrStudent){
	//创建节点
	Node *ptrNode = (Node *)malloc(sizeof(Node));
	//添加节点数据
	strcpy(ptrNode->ptrStu, ptrStudent);
	//修改节点指针
	ptrNode->next = NULL;
	if(ptrLinkedList->head == NULL){						//链表为空，无需修改节点指针
		ptrLinkedList->tail = ptrNode;						//修改链表尾指针
	}else{
		ptrNode->next = ptrLinkedList->head;				//链表不为空，直接修改节点指针指向链表头指针
	}
	ptrLinkedList->head = ptrNode;							//修改链表头指针

	return;
}

//尾部插入法
void addTail(LinkedList *ptrLinkedList, Student *ptrStudent){
	//创建节点
	Node *ptrNode = (Node *)malloc(sizeof(Node));
	//添加节点数据
	strcpy(ptrNode->ptrStu, ptrStudent);
	//修改节点指针
	ptrNode->next = NULL;
	if(ptrLinkedList->head == NULL){						//链表为空，无需修改节点指针
		ptrLinkedList->head = ptrNode;						//修改链表头指针
	}else{
		ptrLinkedList->tail->next = ptrNode;				//链表不为空，直接修改链表尾指针指向节点
	}
	ptrLinkedList->tail = ptrNode;							//修改链表尾指针

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

