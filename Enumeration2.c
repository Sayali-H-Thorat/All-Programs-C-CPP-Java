#include<stdio.h>

enum days {Monday = 1, Tuesday, Wednesday };

int main()
{
	enum days obj;
	
	
	
	printf("Size of enum %d\n", sizeof(obj));
	printf("Monday : %d\n", Monday);
	printf("Tuesday is : %d\n", Tuesday);
	printf("Wednesday : %d\n", Wednesday);
	
	//Monday++;   Not allowed it is integral constant
	
	//printf("Address of Monday is :%d\n", &Monday); We cant print address of enum and hence pointer is not available.
	
	
	return 0;
}