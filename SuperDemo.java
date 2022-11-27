
class Base
{
	public int A,B;
	public Base(int No1, int No2)
	{
		System.out.println("This is Base parameterised constructor");
		this.A = No1;
		this.B = No2;
	}
	public void fun()
	{
		System.out.println("Inside Base fun");
		System.out.println("Value of a from fun method :"+this.A);
	}
	
}
class Derived extends Base
{
	public int X, Y;
	public Derived(int No1, int No2,int No3,int No4)
	{
		super(No3,No4);  //1st usecase of super  Base(51,101)
		this.X = No1;
		this.Y = No2;
	}
	public void gun()
	{
		System.out.println("Value of A from gun method is :"+super.A); //2nd use case of super
		super.fun();   //3rd usecase of super
	}
	
}
class SuperDemo
{
	public static void main(String a[])
	{
		Derived dobj = new Derived(11,21,51,101);
		dobj.gun(); 
		
	}
}

//this mhanje swatach n super mhanje shejarchyach kinva parent ch
//constructor Base in class Base cannot be applied to given types; this error occurs because there is no defaukt constructor in Base as we create a object of derived class