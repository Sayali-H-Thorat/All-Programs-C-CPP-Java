
class A
{
	int No1;
	public void fun()
	{
		System.out.println("This is Base constructor of fun");
	}
	
}
class B extends A
{
	public void gun()
	{
			System.out.println("This is Base constructor of gun");
	}	
}

class C extends B
{
	public void sun()
	{
			System.out.println("This is Base constructor of sun");
	}
	
}


class Multilevel
{
	public static void main(String p[])
	{
		C cobj = new C();
		cobj.fun();
		cobj.gun();
		cobj.sun();
		
		
	}
}