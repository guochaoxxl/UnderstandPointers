#ifndef link_h
#define link_h

//内部数据定义
typedef struct _student{
	char *name;
	short id;
	double record;
	char sex;
} Student;

//内部数据操作--初始化数据
Student *initStudent(int);
//内部数据操作--显示全部数据
void dispStudent(Student *);
//内部数据操作--获取指定数据
void setStudent(Student *, int);
//内部数据操作--设置指定数据
Student getStudent(int);
//内部数据操作--删除全部数据
void deleStudent(Student *);


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
void initList(LinkList *);
//获取链表长度
int lengthList(LinkList *);
//链表节点的头插入
void addHead(LinkList *, Student *);
//链表节点的尾插入
void addTail(LinkList *, Student *);
//链表删除指定节点
void deleNode(LinkList *, int);
//链表删除全部节点
void deleNode(LinkList *);
//链表设置指定节点
void setNode(LinkList *, Student *);
//链表获取指定节点
Node getNode(LinkList *, Compare *);
//链表显示全部数据
void dispNode(LinkList *, Display *);

#endif
