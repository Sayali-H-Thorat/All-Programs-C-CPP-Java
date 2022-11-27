#include<stdio.h>

enum days {Monday, Tuesday, Wednesday };

int main()
{
	enum days obj;
	
	int Salary[] = {200,450,250,700};
	
	printf("Size of enum %d\n", sizeof(obj));
	printf("Monday : %d\n", Monday);
	printf("Tuesday is : %d\n", Tuesday);
	printf("Wednesday : %d\n", Wednesday);
	
	printf("My salary on Monday is : %d\n", Salary[0]);
	printf("My salary on Wednesday is : %d\n", Salary[Wednesday]);
	
	
	return 0;
}