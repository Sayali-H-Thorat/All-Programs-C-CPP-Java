#include<stdio.h>

int main()
{
	int no1 = 10;
	const int no2 = 10;
	
	printf("%d\n", no1);
	printf("%d\n", no2);
	
	no1++;   //Allowed
	no2++;    //Not Allowed
	
	no1 = 20;  //Allowed
	no2 = 20;   //Not Allowed
	
	no1--;    //Allowed
	no2--;     //Not Allowed
	
	return 0;
}
