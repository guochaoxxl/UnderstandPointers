/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :guochaoxxl
  * 版权声明: *** :(魎魍魅魑)GPL3
  * 联络信箱: *** :guochaoxxl@gmail.com
  * 文档用途: *** :深入理解C指针
  * 文档信息: *** :~/WORKM/StudyCode/CodeStudy/cnblogs_understanding_and_using_c_pointers/chapter1/test07.c
  * 修订时间: *** :2017年第39周 10月01日 星期日 上午09:26 (274天)
  * 代码说明: *** :演示char **bestBooks[3]的用法
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <stdio.h>

int main(int argc, char **argv)
{
	//定义书名的数组
	char *titles[] = {"A Tale of Two Cities",
		"Wuthering Heights",
		"Don Quixote",
		"Odyssey",
		"Moby-Dick",
		"Hamlet",
		"Gulliver's Travels",
	};
	char **bestBooks[3];									//最好的图书
	char **englishBooks[4];									//英文图书
	
	bestBooks[0] = &titles[0];
	bestBooks[1] = &titles[3];
	bestBooks[2] = &titles[5];

	englishBooks[0] = &titles[0];
	englishBooks[1] = &titles[1];
	englishBooks[2] = &titles[5];
	englishBooks[3] = &titles[6];

	for(int i = 0; i < 3; i++){
		printf("The bestBooks is: %s\n", *bestBooks[i]);
	}
	printf("\n");
	for(int j = 0; j < 4; j++){
		printf("The englishBooks is: %s\n", *englishBooks[j]);
	}

	return 0;
}
