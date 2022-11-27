//class Definition
class Maths   //class Maths extends Object
{
	public int iNo1;   //Characteristics
	public int iNo2;   //Characteristics
	
	public Maths()  //Default constructor
	{
		System.out.println("Inside default constructor");
		iNo1 = 0;
		iNo2 = 0;
		
	}
	public Maths(int a, int b)  //Parameterised constructor  
	{
		System.out.println("Inside Parameterised constructor");
		iNo1 = a;
		iNo2 = b;
	}
	public int Addition()   //Behaviour
	{
		int iAns = 0;
		iAns = iNo1 + iNo2;
		return iAns;
	}
		public int Substraction()   //Behaviour
	{
		int iAns = 0;
		iAns = iNo1 - iNo2;
		return iAns;
	}
}//End of Maths class

class Demo   //class Demo extends Object
{
	public static void main(String arg[])
	{
		System.out.println("Inside main function");
		
		Maths mobj1 = new Maths();             //Everything is dynamic in java
		Maths mobj2;
		mobj2 = new Maths(10,11);        //
		
		int iRet = 0;
		iRet = mobj1.Addition();
		System.out.println("Addition of default :"+iRet);
		
		iRet = mobj2.Addition();
		System.out.println("Addition of parameterised :"+iRet);
		
		iRet = mobj1.Substraction();
		System.out.println("Substraction of default :"+iRet);
		
		iRet = mobj2.Substraction();
		System.out.println("Substraction of parameterised :"+iRet);
	}
}
//Evrything in java is considered as class in java

//GC access only heap region
//No arrow operator
//No pointer for security purpose
//.class file ch verification hot aapn jevha (java Demo) execute karto tevha
//bytecode verifier Security guard in mall(Java is secure)
//Robust: java code run hotana abnormally band padat nahi karan ki ethe exception handling