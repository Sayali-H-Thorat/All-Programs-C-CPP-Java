#include<iostream>
using namespace std;

class Base
{
	public: 
	      int i;
    private:
	      int j;
	protected:
          int k;
    public:
           Base	()
		   {
			   i = 10;
			   j = 20;
			   k = 30;
		   } 		   
};

class Derived : public Base
{
	public:
	     void fun()
		 {
			 cout<<"Value of i of Base:"<<i<<"\n";
			 //cout<<"Value of private j of Base:"<<j<<"\n";
			 cout<<"Value of protected k of Base:"<<k<<"\n";
		 }
};

int main()
{
	Derived dobj;
	
	dobj.fun();
	
	
	return 0;
}
// Empty class asel tr tyachi size 1byte aste.
//Empty class jr derived asel tr tya class chi size jyachya pasun derived jalay tyachi size aste.
