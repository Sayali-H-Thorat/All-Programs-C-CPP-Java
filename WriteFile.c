#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<conio.h>  

int main()
{
	
	char Fname[20];
	int fd = 0;   //fd:File descriptor
	
	printf("Please enter file name that you want to open:\n");
	scanf("%s", Fname);
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file \n");
		return -1;
	}
	else
	{
		printf("File is successully opened with FD %d\n", fd);
	}
	
	write(fd, "Marvellous",10); //(kashat lihaychay(fd), ky lihaychay(Marvellous), kiti lihaych(10))
	
	close(fd);
	
	return 0;
}