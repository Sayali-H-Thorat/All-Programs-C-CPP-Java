#include<iostream>
using namespace std;

class Base1
{
	public:
	    int i;
		float f;
		
		void gun()
		{
			//cout<<"Inside base1 gun\n";
		}
};
class Base2
{
	public:
	    int i;
		float g;
		
		void fun()
		{
			cout<<"Inside base2 fun\n";
		}
};
class derived:public Base1,public Base2
{
	public:
	     int i;
		 double d;
		 
		 void sun()
		 {
			 cout<<"Inside derived sun\n";
		 }
};
int main()
{
	derived dobj;
	
	dobj.gun();
	dobj.fun();
	dobj.sun();
	
	cout<<"size of base1"<<sizeof(Base1)<<"\n";
	cout<<"size of base2"<<sizeof(Base2)<<"\n";
	cout<<"size of derived"<<sizeof(derived)<<"\n";
}