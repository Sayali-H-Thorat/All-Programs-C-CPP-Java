#include<iostream>
using namespace std;

class Demo
{
	public: 
	      int i;
		  int j;
		  const int k;
		  const int l;
		  
		  Demo() : k(11), l(21)  //Default constructor Memory milaychya aadi mhanje function mdl welcome drink.
		  {
			  i = 51;  //Memory milalyanantr mhanje function mde table milalyavr starter milan.
			  j = 101;
		  }
		  Demo(int a, int b, int c, int d) : k(c), l(d)   // Parameterised constructor
		  {
			  i = a;
			  j = b;
		  }
};

int main()
{
	Demo obj1;
	Demo obj2(10,20,30,40);
	//obj1.k++; //NA
	//obj2.k++; //NA
	obj1.i++; //A
	obj2.i++; //A
	
	return 0;
}