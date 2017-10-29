#include<stdio.h>  
#include<stdlib.h>  

typedef struct _list  
{  
    int data;  
    struct _list *next;  
} List;  
    
//头插法   
void creat(List *head, int n){  
    List *tmp, *q;  
    head->next=NULL;  
    tmp=head;  
    
    for(int i=0; i<n; i++){  
    q=(List *)malloc(sizeof(List));  
	printf("请输入第%d个数据： ", i + 1);
    scanf("%d", &q->data);  
    
    q->next = tmp->next;  
    tmp->next=q;  
    tmp=q;  
    }  
}

//尾插法    
void creat_1(List *head, int n){  
    List *tmp;  
    head->next=NULL;  
    
    for(int i=0; i<n; i++){  
    tmp=(List *)malloc(sizeof(List));  
	printf("请输入第%d个数据： ", i + 1);
    scanf("%d", &tmp->data);  
    tmp->next=head->next;  
    head->next=tmp;  
    }  
    
}  
    
void output(List *head){  
    List *tmp=head->next;  
    while(tmp){  
		printf("%d\t", tmp->data);  
		tmp=tmp->next;  
    }  
    printf("\n");  
}  
    
int main(int argc, char **argv)  
{  
    List *head;  
    head=(List *)malloc(sizeof(List));  
	printf("使用头插法创建链表\n");
    creat(head, 5);  
    output(head);  
    
	printf("使用尾插法创建链表\n");
    creat_1(head, 5);  
    output(head);  

	return 0;
}  
