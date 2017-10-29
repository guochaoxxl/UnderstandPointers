#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void initializeLinkedList(LinkedList *ptrLinkedList){
	ptrLinkedList->head = NULL;
	ptrLinkedList->tail = NULL;
	ptrLinkedList->current = NULL;

	return;
}

void addHead(LinkedList *ptrLinkedList, Student *ptrStudent){
	Node *ptrNode = (Node *)malloc(sizeof(Node));
	strcpy(ptrNode->ptrStu, ptrStudent);
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

void displayStudent(Student *ptrStudent){
	printf("%s's infor: name: %s, address: %s, age: %d, id: %d and sex: %c\n", ptrStudent->name, ptrStudent->name, ptrStudent->address, ptrStudent->age, ptrStudent->id, ptrStudent->sex);

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
