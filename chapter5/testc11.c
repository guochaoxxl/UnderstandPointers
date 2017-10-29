/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :深入理解C指针
  * 文档信息: *** :~/WORKM/StudyCode/CodeStudy/cnblogs_understanding_and_using_c_pointers/chapter5/testc11.c
  * 修订时间: *** :2017年第41周 10月09日 星期一 上午08:58 (282天)
  * 代码说明: *** :自行添加
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *returnALiteral1(int code){
	switch(code){
		case 100:
			return "Boston Processing Center!";
			break;
			
		case 200:
			return "Denver Processing Center!";
			break;

		case 300:
			return "Atlanta Processing Center!";
			break;

		case 400:
			return "San Francisco Processing Center!";
			break;

		default:
			printf("Error!");
			return "None!";
	}
}

char *returnALiteral2(int code){
	char *str = (char *)malloc(sizeof(char) * 50);
	
	switch(code){
		case 100:
			strcpy(str, "Boston Processing Center!");
			break;
			
		case 200:
			strcpy(str, "Denver Processing Center!");
			break;

		case 300:
			strcpy(str, "Atlanta Processing Center!");
			break;

		case 400:
			strcpy(str, "San Francisco Processing Center!");
			break;

		default:
			printf("Error!");
			strcpy(str, "None!");
	}

	return str;
}

int main(int argc, char **argv)
{
	int code;
	printf("please input the code: ");
	scanf("%d", &code);
	printf("you input the code: %d\n", code);
	printf("the result: %s\n", returnALiteral1(code));

	printf("please input the code: ");
	scanf("%d", &code);
	printf("you input the code: %d\n", code);
	printf("the result: %s\n", returnALiteral2(code));

	return 0;
}
