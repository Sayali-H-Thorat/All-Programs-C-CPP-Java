#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo()
	{
		
		cout<<"Inside constructor"<<"\n";
	}
	~Demo()   //Last wish of program by default it prints destructor if it is available
	{
		cout<<"Inside destructor"<<"\n";
		
	}
	void Fun()
	{
		cout<<"Inside fun"<<"\n";
	}
};

int main()
{
	//Demo obj1;  ha static object aahe comment kadli ki constructor n destructor 2 vela call honar
	
	Demo *ptr = NULL;    //pointer create jalay
	ptr = new Demo;       //Actual memory allocate jaliy dynamically
	
	ptr->Fun();
	cout<<"Value of x"<<ptr->x<<"\n";   //0
	
	delete ptr;
	
	
	return 0;
}




//Demo *ptr = NULL;

//ptr = (Demo *)malloc(sizeof(Demo));   c
//ptr = new Demo;                       c++

//ptr->Fun();

//free(ptr);             c
//delete ptr;            c++

























//Every class of c++ is internally gets converted into a structure of c