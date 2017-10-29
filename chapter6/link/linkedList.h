#include <stdbool.h>
#ifndef linkedList_h
#define linkedList_h

typedef struct _student{
	char *name;
	short id;
	double record;
	char sex;
} Student;

typedef struct _node{
	Student *stu;
	struct _node *next;
} Node;

Node *LinkedList;

//初始化单向链表
void initLinkedList(LinkedList *List);
//判断单向链表是否为空
bool listEmpty(LinkedList List);
//将单向链表置空
void listClear(LinkedList *List);
//单向链表头插法
void listCreateHead(LinkedList *List, int n);
//单向链表尾插法
void listCreateTail(LinkedList *List, int n);
//获取单向链表表长（链表节点数）
int listLength(LinkedList List);
//获取单向链表指定位置的节点
int listGetElem(LinkedList List, int i, Student *s);
//获取单向链表指定元素的位置
void listLocateElem(LinkedList List, Student *s);
//向单向链表指定位置插入数据
void listInsertElem(LinkedList *List, int i, Student *s);
//将单向链表指定位置数据删除
void listDeleteElem(LinkedList *List, int i, Student *s);
//单向链表的遍历
void listTraverse(LinkedList List);

#endif
