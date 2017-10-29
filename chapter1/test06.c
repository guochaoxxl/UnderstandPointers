/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :深入理解C指针
  * 文档信息: *** :~/WORKM/StudyCode/CodeStudy/cnblogs_understanding_and_using_c_pointers/chapter1/test05.c
  * 修订时间: *** :2017年第39周 10月01日 星期日 上午08:56 (274天)
  * 代码说明: *** :演示char *argv[]用法
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	for(int i = 0; i < argc; i++){
		printf("The main argument %d is %s\n", i, argv[i]);
	}
	printf("\n");

	return 0;
}
