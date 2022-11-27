class Demo
{
	public int iNo1;
	public int iNo2;
	
	public Demo(int a, int b)
	{
		
		iNo1 = a;
		iNo2 = b;
	}
	
}


class EqualsDemo
{
	public static void main(String a[])
	{
		//Demo  obj1 = new Demo(11,21);
		//Demo  obj2 = new Demo(11,21);
		
		//System.out.println("Hashcode of obj1 is:" +obj1.hashCode());
		//System.out.println("Hashcode of obj1 is:" +obj2.hashCode());
		
		String s1 = "Hello";
		String s2 = "Hello";
		
		System.out.println("Hashcode of s1 is:" +s1.hashCode());  //1001
		System.out.println("Hashcode of s2 is:" +s2.hashCode());  //1001
		
		if(s1.equals(s2))   //if("Hello" == "Hello");
		{
			System.out.println("Objects are same..");			
		}
		else
		{
			System.out.println("Objects are Different..");
		}
		
		if(s1 == s2)   //if(1001 == 1001)
		{
			System.out.println("Objects are same..");			
		}
		else
		{
			System.out.println("Objects are Different..");
		}
	}
}