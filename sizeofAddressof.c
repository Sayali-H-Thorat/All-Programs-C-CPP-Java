#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 3.14;
	double d = 9.567;
	
	printf("Values from the variables are :\n");
	printf("%c\n",ch);
	printf("%d\n",i);
	printf("%f\n",f);
	printf("%lf\n\n",d);
	
	printf("size of each variable\n");
	printf("size of each character :%d\n", sizeof(ch));
	printf("size of each integer: %d\n",sizeof(i));
	printf("size of each float :%d\n",sizeof(f));
	printf("size of each double :%d\n\n", sizeof(d));
	
	printf("Address of each variable\n");
	printf("Address of ch :%d\n", &ch);
	printf("Address of ch :%d\n", &i);
	printf("Address of ch :%d\n", &f);
	printf("Address of ch :%d\n", &d);
	
	return 0;
}