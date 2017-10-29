#ifndef list_h
#define list_h
#define DataType int

typedef struct _node{
	DataType data;
	struct _node *next;
} Node;

typedef struct _list{
	Node *head;
	Node *tail;
	Node *current;
} List;

void initList(List *);
void addHead(List *, DataType iData);
void addTail(List *, DataType iData);
void dispList(List *);
void dispList1(List *);
int getLength(List *);
Node *findNode(List *list, int);
Node *getNode(List *, DataType iData);
void setNode(List *, int, DataType iData);
void deleNode(List *, DataType);
void deleList(List *);

#endif
