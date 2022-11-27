#include<stdio.h>


int main()
{
	int iToken = 0;
	
	printf("Tumcha token number sanga\n");
	scanf("%d",&iToken);
	
	switch(iToken)
	{
		case 11:
		       printf("Mulachi chappal milali\n");
               break;
		case 21:
		       printf("Mulichi chappal milali\n");
               break;
		case 51:
		       printf("Aai chappal milali\n");
               break;
		case 101:
		       printf("Vadilanchi chappal milali\n");
               break;
        default:
               printf("Sorry asa token nahi....\n");
			   break;
			   
	}
	return 0;
}