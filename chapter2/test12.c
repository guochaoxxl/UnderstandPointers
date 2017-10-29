/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :深入理解C指针
  * 文档信息: *** :~/WORKM/StudyCode/CodeStudy/cnblogs_understanding_and_using_c_pointers/chapter2/test12.c
  * 修订时间: *** :2017年第39周 10月01日 星期日 下午01:32 (274天)
  * 代码说明: *** :演示realloc函数的使用
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *arrCh1 = (char *)malloc(sizeof(char) * 8);
	//arrCh1 = "teacherg";
	strcpy(arrCh1, "teacherg");
	printf("arrCh1: %p and value: %s\n", arrCh1, arrCh1);

	char *arrCh2 = (char *)realloc(arrCh1, sizeof(char) * 256);
	if(arrCh2)												//只要新的内存arrCh2分配成功，函数realloc会自动释放arrCh1 
	{  
		printf("Memory Reallocated at: %p\n",arrCh2);  
	}else{  
		printf("Not Enough Memory!/n");  
		free(arrCh1);										//若分配内存失败，则需要手动释放内存，否则内存泄露 
		arrCh1 = NULL;  

		return -1;  
	}  
	printf("arrCh1: %p and value: %s\n", arrCh1, arrCh1);	//只能获取arrCh1的地址，而无法获取内容
	strcat(arrCh2, "uo good");								//arrCh2中已包含原来arrCh1中内容，添加新内容
	printf("arrCh2: %p and value: %s\n", arrCh2, arrCh2);	//获取arrCh2的地址和内容
	free(arrCh2);											//释放内存

	return 0;
}
