#include<iostream>
using namespace std;

class base  //16
{
	public:
	    int i;  //4
		float f;  //4
		double d;   //8
		
		void fun()
		{
			cout<<"Inside base fun\n";
		}
		
		void gun()
		{
			cout<<"Inside base gun\n";
		}	
};
class derived: public base   //12
{
	public:
	    int i;  //4
		double d;  //8
		
		void sun()
		{
			cout<<"Inside derived sun\n";
		}
};

int main()
{
	//base bobj;
	//derived *dobj = NULL ;
	//dobj = new derived;
	derived dobj;
	
	dobj.fun();
	dobj.gun();
	dobj.sun();
	
	cout<<"size of base:"<<sizeof(base)<<"\n";
	cout<<"size of derived:"<<sizeof(derived)<<"\n";
	
	return 0;
}