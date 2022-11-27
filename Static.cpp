#include<iostream>
using namespace std;

class Demo
{
	public:              //Access specifier
	      int i;         //instance variable each objct la te seperate create n allocate hot
		  int j;         //instance variable
		  static int k;  //Class variable obj sathi te common ast..
		  static int l;  //Class variable
		  
		  Demo()      //Default constructor
		  {
			  i = 0;  //Non static
			  j = 0;  //Non static
		  }	
		  
		  Demo (int a, int b)   //Parameterised constructor
		  {
			  i = a;
			  j = b;
		  }
		  //void fun(const Demo *this)
		  void fun()      //instance method  object shi concer asto
		  {
			  //static + non static
			  cout<<"Inside fun non static \n";			  
			  cout<<"value of i :"<<this->i<<"\n";
			  cout<<"value of j :"<<this->j<<"\n";
			  cout<<"value of k :"<<k<<"\n";
			  cout<<"value of l :"<<l<<"\n";
			  
		  }
		  //static void gun()
		  static void gun()   //class method   object shi concer nasto
		  {
			  //static (static method sathi this pointer nasto)
			  cout<<"Inside gun static\n";			  
			  cout<<"value of k :"<<k<<"\n";
			  cout<<"value of l :"<<l<<"\n";
		  }
};
//Load time variables
int Demo::k = 0;
int Demo::l = 0;

int main()
{
	cout<<"Inside main\n";
	cout<<"Values of k :"<<Demo::k<<"\n";
	cout<<"Values of l :"<<Demo::l<<"\n";
	Demo::gun();
	Demo obj1(10,11);
	Demo obj2(20,21);
	
	cout<<"Value of i in obj1: "<< obj1.i<<"\n"; //10
	cout<<"Value of i in obj2: "<< obj2.i<<"\n";  //20
	
	cout<<"Value of j in obj1: "<< obj1.j<<"\n";  //11
	cout<<"Value of j in obj2: "<< obj2.j<<"\n"; //21
	
	obj1.fun();  //fun(obj1);
	obj2.fun();
	
	return 0;
}

//size of object is summation of sizes of its non static characteristics
//sizeof(obj) = sizeof(i) + sizeof(j);
//sizeof(obj) = 4 + 4;
//sizeof(obj) = 8;
//static(Fkt Static access karat) saglyansathi common ast. Static variables are load time variable.  Lonach n Salad
//Non static Seperate ast. Thali Saglyana seperate aste.(Static and non static access karat)

//For existence of class it gives 1 byte as op for sizeof class object
//Hunda dene ex. kahich n denyapeksha naral n 1 rs dene.