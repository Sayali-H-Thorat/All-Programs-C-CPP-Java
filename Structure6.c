#include<stdio.h>

struct Demo1
{
	int no;
	struct Demo1 next;
};

struct Demo2
{
	int no;
	struct Demo2 *next;
};

int main()
{
	struct Demo1 obj1;
	struct Demo2 obj2;
	
	return 0;
}






//#include<stdio.h>

//struct Demo
//{
//	int A;
//	int B;

//};

//struct Hello
//{
//	int C;
//	float D;
//	struct Demo dobj;
//};

//int main()
//{
//	struct Hello hobj;
	
//	hobj.C = 11;
//	hobj.D = 10.9;
//	hobj.dobj.A = 21;
//	hobj.dobj.B = 51;
		
//	return 0;
//}
