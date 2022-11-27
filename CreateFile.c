#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	
	char Fname[20];
	int fd = 0;   //fd:File descriptor burger order ch example(token) first 3 fd(array strt from 0 to 2) are preserved thts why it prints 3 on screen
	
	printf("Please enter file name that you want to create:\n");
	scanf("%s", Fname);
	
	fd = creat(Fname,0777);
	if(fd == -1)
	{
		printf("Unable to create the file \n");
	}
	else
	{
		printf("File is successully created with FD %d\n", fd);
	}
	
	return 0;
}