#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "list.h"

//链表初始化
void initList(List *list){
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;
}

//链表头插法
void addHead(List *list, DataType iData){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = iData;
	node->next = NULL;

	if(list->head == NULL){
		list->tail = node;
	}else{
		node->next = list->head;
	}
	list->head = node;

	return;
}

//链表尾插法
void addTail(List *list, DataType iData){
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = iData;
	node->next = NULL;

	if(list->head == NULL){
		list->head = node;
	}else{
		list->tail->next = node;
	}
	list->tail = node;

	return;
	
}

//链表输出
void dispList(List *list){
	Node *node = list->head;
	int i = 0;
	while(list->head != NULL){
		printf("the %dth node: %d\n", i + 1, node->data);
		node = node->next;
		i++;
	}
	printf("disp finished!\n");

	return;
}

//链表输出
void dispList1(List *list){
	Node *node = list->head;
	int i = 0;
	while(node != NULL){
		printf("the %dth node: %d\n", i + 1, node->data);
		node = node->next;
		i++;
	}
	printf("disp finished!\n");

	return;
}

//链表长度
int getLength(List *list){
	Node *node = list->head;
	int i = 0;
	while(node != NULL){
		node = node->next;
		i++;
	}

	return i;
}

//链表节点查找
Node *findNode(List *list, int i){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	while(i){
		node = node->next;
	}

	return node;
}

//链表节点获取
Node *getNode(List *list, DataType iData){
	Node *node = (Node *)malloc(sizeof(Node));
	list->head = node;
	while(node != NULL){
		if(node->data == iData){
			return node;
		}else{
			node = node->next;
		}
	}

	return NULL;
}

//链表节点设置
void setNode(List *list, int i, DataType iData){
	Node *nodeCurrent = (Node *)malloc(sizeof(Node));
	nodeCurrent->data = iData;

	Node *nodePre = findNode(list, i-1);
	nodeCurrent->next = nodePre->next;
	nodePre->next = nodeCurrent;

	return;
}

void deleNode(List *list, DataType iData){
	Node *node = getNode(list, iData);

	return;
}

void deleList(List *list){

	return;
}
