#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _employee{
	char name[32];
	short age;
	char sex;
} Employee;

int compareEmployee(Employee *employee1, Employee *employee2){
	return strcmp(employee1->name, employee2->name);
}

void displayEmployee(Employee *ptrEmployee){
	printf("Employee %s's info: name: %s\t age: %d\t sex: %c\n", ptrEmployee->name, ptrEmployee->name, ptrEmployee->age, ptrEmployee->sex);
}

Employee * initEmployee(char *iName, short iAge, char iSex){
	Employee *tmp = (Employee *)malloc(sizeof(Employee));
	strcpy(tmp->name, iName);
	tmp->age = iAge;
	tmp->sex = iSex;

	return tmp;
}

typedef struct _node{
	Employee *ptrEmp;
	struct _node *next;
} Node;

typedef struct _linkedList{
	Node *head;
	Node *tail;
	Node *current;
} LinkedList;

void initList(LinkedList *ptrLinkedList){
	ptrLinkedList->head = NULL;
	ptrLinkedList->tail = NULL;
	ptrLinkedList->current = NULL;

	return;
}

void addHead(LinkedList *ptrLinkedList, Employee *ptrEmployee){
	Node *node = (Node *)malloc(sizeof(Node));
	node->ptrEmp = (Employee *)malloc(sizeof(Employee));
	strcpy(node->ptrEmp->name, ptrEmployee->name);
	node->ptrEmp->age = ptrEmployee->age;
	node->ptrEmp->sex = ptrEmployee->sex;
	node->next = NULL;
	if(ptrLinkedList->head == NULL){
		ptrLinkedList->tail = node;
	}else{
		node->next = ptrLinkedList->head;
	}
	ptrLinkedList->head = node;

	return;
}

void addTail(LinkedList *ptrLinkedList, Employee *ptrEmployee){
	Node *node = (Node *)malloc(sizeof(Node));
	node->ptrEmp = (Employee *)malloc(sizeof(Employee));
	strcpy(node->ptrEmp->name, ptrEmployee->name);
	node->ptrEmp->age = ptrEmployee->age;
	node->ptrEmp->sex = ptrEmployee->sex;
	node->next = NULL;
	if(ptrLinkedList->head == NULL){
		ptrLinkedList->head = node;
	}else{
		ptrLinkedList->tail->next = node;
	}
	ptrLinkedList->tail = node;

	return;
}

void deleteNode(LinkedList *ptrLinkedList, char *cName){


	return;
}

Node *getNode(LinkedList *ptrLinkedList, char *cName){
	Node *node = (Node *)malloc(sizeof(Node));
	node->ptrEmp = (Employee *)malloc(sizeof(Employee));
	while(node != NULL){
		if(strcmp(node->ptrEmp->name, cName)){
			node = node->next;
		}else{
			return node;
		}
	}

	return NULL;
}

void displayNode(Node *node){
	displayEmployee(node->ptrEmp);

	return;
}

void displayLinkedList(LinkedList *ptrLinkedList){
	//printf("\n LinkedList \n");
	Node *current = ptrLinkedList->head;
	while(current != NULL){
		displayEmployee(current->ptrEmp);
		current = current->next;
	}

	return;
}

int main(int argc, char **argv)
{
	LinkedList *linkedList1 = (LinkedList *)malloc(sizeof(LinkedList));
	LinkedList *linkedList2 = (LinkedList *)malloc(sizeof(LinkedList));
	int size;
	printf("please input the size: ");
	scanf("%d", &size);

	//Employee *arrEmp[size];
	printf("please input %d names: \n", size);
	char *arrName[size];
	for(int i = 0; i < size; i++){
		printf("the %dth name:", (i + 1));
		scanf("%s", arrName + i);
	}

	short arrAge[size];
	for(int i = 0; i < size; i++){
		printf("the %dth age: ", i + 1);
		scanf("%d", &arrAge[i]);
	}

	char arrSex[size];
	for(int i = 0; i < size; i++){
		int tmp = getchar();
		printf("the %dth sex: ", i + 1);
		scanf("%c", &arrSex[i]);
	}


	Node *arrNode[size];
	for(int i = 0; i < size; i++){
		arrNode[i] = (Node *)malloc(sizeof(Node));
		arrNode[i]->ptrEmp = (Employee *)malloc(sizeof(Employee));
		strcpy(arrNode[i]->ptrEmp->name, arrName + i);
		arrNode[i]->ptrEmp->age = arrAge[i];
		arrNode[i]->ptrEmp->sex = arrSex[i];
	}

	printf("display arrNode: \n");
	for(int i = 0; i < size; i++){
		printf("arrNode[%d] info: name-%s, age-%d, sex-%c\n", i + 1, arrNode[i]->ptrEmp->name, arrNode[i]->ptrEmp->age, arrNode[i]->ptrEmp->sex);
	}

	initList(&linkedList1);
	initList(&linkedList2);

	printf("Add Head: \n");
	for(int i = 0; i < size; i++){
		addHead(&linkedList1, arrNode[i]);
		//displayNode(arrNode[i]);
	}

	displayLinkedList(linkedList1);
	
	printf("Add Tail: \n");
	for(int i = 0; i < size; i++){
		addTail(&linkedList2, arrNode[i]);
		//displayNode(arrNode[i]);
	}
	//displayLinkedList(linkedList2);
	displayNode(linkedList2->head);
	displayNode(linkedList2->head->next);
	displayNode(linkedList2->head->next->next);


	return 0;
}
