#include<iostream>
using namespace std;

class Demo
{
	public:
	    void fun(int *)
		{
			cout<<"First defination";
		}
		void fun(float *)
		{
			cout<<"Second defination";
		}
		void fun()
		{
			cout<<"Third defination";
		}
};

int main()
{
	int no = 11;
	float f = 3.14;
	
	Demo obj;
	
	
	obj.fun(no);
	obj.fun(&no);
	obj.fun(&f);
	return 0;
}