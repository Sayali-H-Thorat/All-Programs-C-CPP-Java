#include<iostream>
using namespace std;

class Demo
{
	public:
	    void fun(int i)
		{
			cout<<"First Defination";
		}
		void fun(int i,int j)
		{
			cout<<"Second defination";
		}
};

int main()
{
	Demo obj;
	obj.fun(20);
	obj.fun(10,20);
	
	return 0;
}