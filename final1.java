//Same as constant characteristics in c++
class Demo
{
	public int No1;
	public final int No2 = 11;  //const int No2;
	public final int No3;       //const int No3;
	
	public Demo()   //:No2(11),No3(21)
	{
		No1 = 0;
		No3 = 21;
		System.out.println("Value of No2 is:"+No1);
	}
	
}
class final1
{
	public static void main(String arr[])
	{
		final int i = 51;   //const int i = 51;//this is final local variable
		Demo obj = new Demo();
		obj.No1++;
		//obj.No2++;
		//obj.No3++;
		
	}
	
}