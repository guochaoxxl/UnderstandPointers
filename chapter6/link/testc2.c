/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :深入理解C指针
  * 文档信息: *** :~/WORKM/StudyCode/cnblogs_understanding_and_using_c_pointers/chapter6/link/testc2.c
  * 修订时间: *** :2017年第42周 10月17日 星期二 上午06:03 (290天)
  * 代码说明: *** :演示模块化编程，包括头文件stuG.h和与其对应的实现文件stuG.c,
  * 编译方式需要将所有文件包括，gcc -g stuG.c testc2 -o testc2
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/

#include "stuG.h"

int main(int argc, char **argv)
{
	int size;
	printf("please input a number: ");
	scanf("%d", &size);
	Student *arrStu[size];
	for(int i = 0; i < size; i++){
		arrStu[i] = initStudent(i);
	}
	for(int i = 0; i < size; i++){
		displayStudent(arrStu[i]);
	}
	for(int i = 0; i < size; i++){
		deleteStudent(arrStu[i]);
	}

	return 0;
}
