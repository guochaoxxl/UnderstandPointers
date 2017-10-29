/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :数据结构与算法--C语言描述
  * 文档信息: *** :~/WORKM/StudyCode/CodeStudy/cnblogs_understanding_and_using_c_pointers/chapter4/testc08.c
  * 修订时间: *** :2017年第37周 09月16日 星期六 上午08:54 (259天)
  * 代码说明: *** :指针和数组表示法有着本质的区别
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	//int matrix[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
	int *matrix = (int *)malloc(sizeof(int));
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			*((matrix + i) + j) = i + j + j;
		}
	}

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			printf("matrix[%d][%d]: %d\t", i, j, *((matrix + i) + j));
		}
		printf("\n");
	}

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 2; j++){
			printf("mat[%d][%d]: %d\t", i, j, *((matrix + i) + j));
		}
		printf("\n");
	}

	return 0;
}
