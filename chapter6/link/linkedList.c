#include "linkedList.h"

//初始化数据信息
Student *initStudent(int i){
	Student *ptrStu = (Student *)malloc(sizeof(Student));
	ptrStu->name = (char *)malloc(sizeof(char));
	printf("please input student %d'th info: ", i);
	printf("\nname: ");
	scanf("%s", ptrStu->name);
	printf("\nid: ");
	scanf("%d", &ptrStu->id);
	printf("\nrecord: ");
	scanf("%f", &ptrStu->record);
	printf("\nsex: ");
	scanf("%c", &ptrStu->sex);

	return ptrStu;
}

void destoryStudent(Student *ptrStudent){
	free(ptrStudent->name);
	free(ptrStudent);
}

//初始化单向链表
void initLinkedList(LinkedList *List){
	*List = (LinkedList)malloc(sizeof(Node));
	if(!(*List)){
		return;
	}
	(*List)->next = NULL;

	return;
}

//判断单向链表是否为空
bool listEmpty(LinkedList List){
	if(List->next){
		return true;
	}else{
		return false;
	}
}

//将单向链表置空
void listClear(LinkedList *List){
	LinkedList lNext;
	LinkedList tmp;
	tmp = (*List)->next;
	while(tmp){
		lNext = tmp->next;
		free(tmp);
		tmp = lNext;
	}
	(*List)->next = NULL;

	return;
}

//添加student信息
Student *addStudentInfo(int i){
	printf("please input %s'd student info: \n");
	Student *ptrStu = (Student *)malloc(sizeof(Student));
	ptrStu->name = (char *)malloc(sizeof(char) * 20);
	printf("name: ");
	scanf("%s", ptrStu->name);
	printf("\nid: ");
	scanf("%d", ptrStu->id);
	printf("\nrecord: ");
	scanf("%f", ptrStu->record);
	printf("\nsex: ");
	scanf("%c", ptrStu->sex);

	return ptrStu;
}

void *deleteStudent(Student *ptrStu){
	free(ptrStu->name);
	free(ptrStu);

	return;
}

//单向链表头插法
void listCreateHead(LinkedList *List, int n){
	LinkedList tmp;
	*List = (LinkedList)malloc(sizeof(Node));
	(*List)->next = NULL;
	for(int i = 0; i < n; i++){
		tmp = addStudentInfo(i + 1);
		tmp->name = (char *)malloc(sizeof(char) * 20);
		strcpy(tmp->name, "")
	}
}
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
