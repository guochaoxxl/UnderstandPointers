#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *command = (char *)malloc(sizeof(char) * 10);
	printf("please input command: ");
	scanf("%s", command);
	printf("command: %s\n", command);
	if(strcmp(command, "Quit") == 0 || strcmp(command, "quit") == 0){
		printf("You input the command: %s", command);
	}else{
		printf("You can't quit!\n");
	}

	return 0;
}
