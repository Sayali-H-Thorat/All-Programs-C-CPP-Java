#include<iostream>
using namespace std;

class Demo
{
	public: 
	      int i;
		  const int j;  //constant characteristics
		  
		  //Parameterised constructor with Default values
		  Demo(int x = 10, int y = 20) : j(y)
		  {
			  i = x;
			  j = y;
		  }	
		  void fun()
		  {
			  int a = 10;
			  const int b = 20;  //Constant variable
			  i++;  //A  (7 no line mule allowed)
			  j++;  //NA(8)
			  a++;   //A(18)
			  b++;    //NA(19)
		  }
		  void gun() const    //Constant Behaviour
		  {
			  int a = 10;
			  const int b = 20;    
			  i++;    //NA (25)
			  j++;    //NA (25)
			  a++;    //A(27)
			  b++;    //NA(28)
		  }
};
int main()
{
	Demo obj3(11,21);   //11   21
	const Demo obj2(11,21);  //11  21   //Constant object
	
	obj1.fun();   //A
	obj1.gun();   //A
	obj2.fun();   //NA constant object can call only constant function
	obj2.gun();   //A
	
	obj1.i++;   //A
	obj1.j++;   //A
	
	return 0;
}