#include<iostream>
//using namespace std;

namespace Marvellous  //Not a datatype hence ; is not required
{
	class Demo
	{
		public: 
		    int i,j;
			void fun()
			{
				std::cout<<"Inside fun of Demo from Marvellous\n";  //cout is a object of namespace whose class is in iostream header file. Hence the header file sequence matters
			}
	};
	class Hello
	{
		public:
		     int x,y;
	};	
}
namespace Infosystems
{
	class Demo
	{
		public:
		    int a,b;
			void fun()
			{
				std::cout<<"Inside fun of Demo from Infosystems\n";
			}
	};
}
int main()
{
	Marvellous::Demo obj1;       //jevd pahije tevdach yenar tya namespace mdun
	obj1.fun();
	Infosystems::Demo obj2;
	obj2.fun();
	
	using namespace Marvellous;   //Sagle yenar tya namespace mdl
	Hello hobj;
	Demo obj3;
	return 0;
}