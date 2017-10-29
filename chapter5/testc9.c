#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t stringLength(const char *string){
	size_t length = 0;
	while(*(string++)){
		length++;
	}

	return length;
}

int main(int argc, char **argv)
{
	char simpleArr[] = "Simple String!";
	char *ptrSimpleArr = (char *)malloc(strlen("Simple String!") + 1);
	strcpy(ptrSimpleArr, "Simple String!");
	
	printf("使用数组名获取字符串：%s and %d\n", simpleArr, stringLength(simpleArr));
	printf("使用数组名加&获取字符串：%s and %d\n", &simpleArr, stringLength(&simpleArr));
	printf("使用数组首元素地址获取字符串：%s and %d\n", &simpleArr[0], stringLength(&simpleArr[0]));
	printf("使用指针获取字符串：%s and %d\n", ptrSimpleArr, stringLength(ptrSimpleArr));

	return 0;
}
