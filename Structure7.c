#include<stdio.h>

#pragma pack(1)

struct Demo
{
	//int i;     //4
	//char ch1;   //4
	//float f;   //4
	//char ch;   //4
	//float d;    //4 
	
	int i;     //4
	float f;   //4
	char ch;   //1  
	char ch1;   //1
	float d;    //4    
	
	
};

int main()
{
	struct Demo dobj;
	
	printf("Size of the structure is : %d\n", sizeof(dobj));
	
	return 0;
}
