#include<iostream>
using namespace std;

class Base
{
	int X;    
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
		    void fun()
			{
				cout<<"Value of public i in fun :"<<i<<"\n";    //Allowed
				cout<<"Value of private j in fun :"<<j<<"\n";   //Allowed
				cout<<"Value of protected k in fun :"<<k<<"\n"; //Allowed
			}
};

int main()
{
	Base bobj;	
	cout<<"Value of public i :"<<bobj.i<<"\n";   //Allowed
	//cout<<"Value of private j:"<<bobj.j<<"\n";   //Not Alloweds
	//cout<<"Value of protected k:"<<bobj.k<<"\n";  //Not Allowed
	
	bobj.fun();
	
	
	return 0;
}
