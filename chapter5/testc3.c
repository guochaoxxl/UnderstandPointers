#include <stdio.h>
#include <stdlib.h>

char *getLine(){
	const size_t sizeIncrement = 20;											//缓冲区初始化是的大小与缓冲区不够时增加的大小
	size_t maximumLength = 2 * sizeIncrement;									//缓冲区最大的大小，超过此就需要增加缓冲区大小
	size_t length = 0;															//已读入的字符数目
	char *buffer = malloc(sizeof(char) * sizeIncrement);						//为缓冲区初始分配的大小
	char *currentPosition = buffer;												//当前字符的指针
	int character;																//当前字符的值

	//检验缓冲区是否分配成功
	if(currentPosition == NULL){
		return NULL;
	}

	//通过死循环完成不停的输入时，根据需要调整大小，直至输入回车就退出
	while(1){
		character = fgetc(stdin);												//通过标准输入获取当前输入的字符值
		if(character == '\n'){													//检验输入的字符是不是结束符\0
			break;
		}
		//检验输入字符的个数是否超过了缓冲区分配的大小，根据需求实现动态调整
		if(++length >= maximumLength){											//检验输入字符个数是否达到缓冲区最大值
			char *newBuffer = realloc(buffer, maximumLength += sizeIncrement);	//申请新的缓冲区，大小比原来的有所增大

			if(newBuffer == NULL){												//检验新缓冲区是否分配成功,成功继续，否则需处理
				free(buffer);													//释放先前申请的缓冲区内存
				return NULL;													//退出函数
			}
			currentPosition = newBuffer + (currentPosition - buffer);			//将当前指针偏置到与原来同样的位置
			buffer = newBuffer;													//将老指针指向新分配的内存
		}
		*currentPosition++ = character;											//将新输入的字符存入进缓冲区
	}
	*currentPosition = '\0';													//退出输入后，在字符串后添加结束标志\0

	return buffer;																//返回最后的缓冲区的指针
}

int main(int argc, char **argv)
{
	char *buffer = getLine();
	printf("You input: \n");
	printf("%s", buffer);

	return 0;
}
