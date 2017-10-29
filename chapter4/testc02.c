#include <stdio.h>
#include <stdlib.h>

char *getLine(){
	const size_t sizeIncrement = 10;									//内存需要增加时的增量
	size_t maximumLength = sizeIncrement;								//可以安全存入缓冲区的最大字符个数
	size_t length = 0;													//读入的字符数
	int character;														//上次读入的字符
	char *buffer = (char *)malloc(sizeIncrement);						//申请分配的内存
	char *currentPosition = buffer;										//缓冲区中当前字符的指针

	if(currentPosition == NULL){										//判断首次分配内存是否成功，否则就退出程序
		return NULL;
	}

	while(1){
		character = fgetc(stdin);										//获取键盘输入的字符
		if(character == '\n'){											//检测输入的字符是否为回车
			break;
		}
		if(++length >= maximumLength){									//检查输入的长度超过最大的字符长度
			char *newBuffer = (char *)realloc(buffer, maximumLength += sizeIncrement);	//申请新的内存

			if(newBuffer == NULL){										//分配内存失败，就需要释放原来申请的内存
				free(buffer);

				return NULL;
			}

			currentPosition = newBuffer + (currentPosition - buffer);	//修正当前字符的指针，指针相减
			buffer = newBuffer;											//重新定位指针
		}
		*currentPosition++ = character;									//将输入的字符付给指针，同时将指着指向下一个位置
	}
	*currentPosition = '\0';											//在字符串的结尾添加字符串的结束符

	return buffer;
}

int main(int argc, char **argv)
{
	printf("please input: ");
	printf("%s\n", getLine());
	printf("finished!\n");

	return 0;
}
