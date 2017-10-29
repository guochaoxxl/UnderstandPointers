/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :数据结构与算法--C语言描述
  * 文档信息: *** :~/WORKM/StudyCode/CodeStudy/cnblogs_understanding_and_using_c_pointers/chapter4/testc05.c
  * 修订时间: *** :2017年第37周 09月16日 星期六 上午06:06 (259天)
  * 代码说明: *** :使用数组表示法，使用指针的一维数组
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *arr[5];
	for(int i = 0; i < 5; i++){
		arr[i] = (int *)malloc(sizeof(int));
		*arr[i] = i + 100;
	}
	
	for(int i = 0; i < 5; i++){
		printf("arr[%d] value: %p and address: %p and *arr[%d] value: %d\n", i, arr[i], &arr[i], i, *arr[i]);
	}
	printf("\n");

	return 0;
}
