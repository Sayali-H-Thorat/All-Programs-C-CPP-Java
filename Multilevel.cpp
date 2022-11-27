#include<iostream>
using namespace std;

class Base
{
	public:
	int A,B;
	
	Base()
	{
		cout<<"Inside base constructor\n";
	}
	~Base()
	{
		cout<<"Inside base destructor\n";
	}
	void fun()
	{
		cout<<"Inside fun of base\n";
	}
		
};
class Derived : public Base
{
	public:
	     int X,Y;
		 
		 Derived()
		 {
			 cout<<"Inside derived constructor\n";
		 }
		 ~Derived()
		 {
			 cout<<"Inside derived destructor\n";
		 }
		 void gun()
		 {
			 cout<<"Inside gun of derived\n";
		 }
	
};

class DerivedX : public Derived
{
	public:
	     int i,j;
		 
		 DerivedX()
		 {
			 cout<<"Inside DerivedX constructor\n";
		 }
		 ~DerivedX()
		 {
			 cout<<"Inside DerivedX destructor\n";
		 }
		 void sun()
		 {
			 cout<<"Inside sun of DerivedX\n";
		 }	
	
};

int main()
{
	cout<<"sizeof base: "<<sizeof(Base)<<"\n";   //8
	cout<<"sizeof Derived: "<<sizeof(Derived)<<"\n";   //16
	cout<<"sizeof DerivedX: "<<sizeof(DerivedX)<<"\n";  //24
	
	DerivedX dobj;
	
	dobj.fun();
	dobj.gun();
	dobj.sun();
		
	return 0;
}