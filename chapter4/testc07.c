/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :数据结构与算法--C语言描述
  * 文档信息: *** :~/WORKM/StudyCode/CodeStudy/cnblogs_understanding_and_using_c_pointers/chapter4/testc07.c
  * 修订时间: *** :2017年第37周 09月16日 星期六 上午08:22 (259天)
  * 代码说明: *** :一维数组可以当成是二维数组的第0列
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int *arr[10];
	for(int i = 0; i < 10; i++){
		arr[i] = (int *)malloc(sizeof(int));
		*arr[i] = 100 + i;
	}

	for(int i = 0; i < 10; i++){
		//printf("**(arr + %d): %d and *(arr + %d): %p and (arr + %d): %p\n", i, **(arr + i), i, *(arr + i), i, (arr + i));
		//printf("%d\t", arr[i][i]);
	}
	printf("%d\t", arr[0][0]);
	printf("%d\t", arr[1][0]);
	printf("%d\t", arr[2][0]);
	printf("%d\t", arr[3][0]);
	printf("%d\t", arr[4][0]);
	printf("%d\t", arr[5][0]);
	printf("%d\t", arr[6][0]);
	printf("%d\t", arr[7][0]);
	printf("%d\t", arr[8][0]);
	printf("%d\t", arr[9][0]);

	return 0;
}
