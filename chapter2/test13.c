#include <stdlib.h>  
#include<stdio.h>  

int main(int argc, char **argv)  
{  
	char *p;  
	p=(char *)malloc(sizeof(char) * 100);  
	if(p){
		printf("Memory Allocated at: %p\n",p);  
	}else{
		printf("Not Enough Memory!/n");  
	}
	char *new_p=(char *)realloc(p, sizeof(char) * 256);  
	if(new_p)  
	{  
		printf("Memory Reallocated at: %p\n",new_p);  
	}else{  
		printf("Not Enough Memory!/n");  
		free(p);  
		p = NULL;  

		return -1;  
	}  
	p = new_p;  
	printf("Memory Allocated at: %p\n",p);  

	free(p);  
	return 0;  
}  
