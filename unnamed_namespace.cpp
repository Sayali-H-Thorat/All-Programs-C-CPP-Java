#include<iostream>
//using namespace std;

namespace   //Dusryala access karun dyaych nasel tr unnamed namespace use kartat
{
	class Demo
	{
		public: 
		    int i,j;
			void fun()
			{
				std::cout<<"Inside fun of Demo from unnamed namespace\n";  //cout is a object of namespace whose class is in iostream header file. Hence the header file sequence matters
			}
	};
		
}

int main()
{
	Demo obj;
	
	obj.fun();
	
	return 0;
}