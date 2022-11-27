#include<iostream>
using namespace std;

class Demo
{
	private:
	     int A,B;
	public: 
		 Demo(int i = 0, int j = 0)   //Parameterised constructor with default arguments
		 {
			 A = i;
			 B = j;
		 }
		 void Display()
		 {
			 cout<<A<<"\n";
			 cout<<B<<"\n";
		 }
		friend Demo operator +(Demo , Demo );
};

Demo operator +(Demo obj1, Demo obj2)   //Here + is a function
{
	cout<<"Inside + operator function\n";
	return Demo(obj1.A + obj2.A, obj1.B + obj2.B);   //ya line vr inbuilt operator of primitive datatype chi addition hoti
}

int main()
{
	Demo X(10,20);        
	Demo Y(30,40);     
	Demo Ans;  
	
	Ans = X + Y;     // +(X, Y);
	Ans.Display();
	return 0;
}