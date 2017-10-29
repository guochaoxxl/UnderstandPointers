/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :数据结构与算法--C语言描述
  * 文档信息: *** :~/WORKM/StudyCode/CodeStudy/cnblogs_understanding_and_using_c_pointers/chapter4/testc09.c
  * 修订时间: *** :2017年第37周 09月16日 星期六 上午09:26 (259天)
  * 代码说明: *** :数组指针的使用方式演示
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int matrix[2][5] = {{1, 2, 3, 4, 5,},{6, 7, 8, 9, 10,},};
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			printf("matrix[%d][%d] Address: %p value: %d\n", i, j, &matrix[i][j], matrix[i][j]);
		}
		printf("\n");
	}

	int (*ptrMatrix)[5] = matrix;
	for(int i = 0; i < 5; i++){
		printf("%p and %d\n", (*ptrMatrix + i), *(*ptrMatrix + i));
	}
	printf("\n");

	for(int i = 0; i < 5; i++){
		printf("%p and %d\n", (*(ptrMatrix + 1) + i), *(*(ptrMatrix + 1) + i));
	}
	printf("\n");

	return 0;
}
