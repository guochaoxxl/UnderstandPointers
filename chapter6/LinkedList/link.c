#include "link.h"
#define SIZE 20
//内部数据操作--初始化数据
Student *initStudent(int num){
	Student *stu = (Student *)malloc(sizeof(Student));
	stu->name = (char *)malloc(sizeof(char) * SIZE);
	printf("please input %d'th student: \n", num);
	printf("name: ");
	scanf("%s", stu->name);
	printf("id: ");
	scanf("%d", &stu->id);
	printf("record: ");
	scanf("%lf", &stu->record);
	int tmp = getchar();
	printf("sex: ");
	scanf("%c", &stu->sex);

	return stu;
}

//内部数据操作--显示全部数据
void dispStudent(Student *stu){
	printf("student %s's info: id: %d\t name: %s\t, record: %f\t, sex: %c\n");

	return;
}

//内部数据操作--获取指定数据
void setStudent(Student *stu, int i){
	int tmp = 0;
	if(i){
		return;
	}else{
		return;
	}
}

//内部数据操作--设置指定数据
Student* getStudent(int i){
	int tmp = 0;
	if(i){
		return NULL;
	}else{
		return NULL;
	}
}
//内部数据操作--删除全部数据
void deleStudent(Student *stu){
	free(stu->name);
	free(stu);

	return;
}


typedef struct _node{
	Student *ptrStu;
	struct _node *next;
} Node;

typedef struct _linkList{
	Node *head;
	Node *tail;
	Node *current;
} LinkList;

//初始化链表
void initList(LinkList *list){
	list->head = NULL;
	list->tail = NULL;
	list->current = NULL;
}

//获取链表长度
int lengthList(LinkList *list){
	int size = 0;
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	while(node != NULL){
		size++;
		node = node->next;
	}
	
	return size;
}

//链表节点的头插入
void addHead(LinkList *list, Student *stu){
	Node *node = (Node *)malloc(sizeof(Node));
	strcpy(node->ptrStu, stu);
	node->next = NULL;
	if(list->head == NULL){
		list->tail = node;
	}else{
		node->next = list->head;
	}

	list->head = node;
}
//链表节点的尾插入
void addTail(LinkList *list, Student *stu){
	Node *node = (Node *)malloc(sizeof(Node));
	strcpy(node->ptrStu, stu);
	node->next = NULL;
	if(list->head == NULL){
		list->head = node;
	}else{
		list->tail->next = node;
	}

	list->tail = node;
}
//链表删除指定节点
void deleNode(LinkList *list, int i){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	if(i != 0 && node != NULL){
		i--;

	}
}
//链表删除全部节点
void deleNode(LinkList *);
//链表设置指定节点
void setNode(LinkList *, Student *);
//链表获取指定节点
Node getNode(LinkList *, Compare *);
//链表显示全部数据
void dispNode(LinkList *, Display *);

#endif
