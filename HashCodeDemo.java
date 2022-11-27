class Demo
{
	public int iNo1;
	public int iNo2;
	
	public Demo(int a, int b)
	{
		
		iNo1 = a;
		iNo2  =b;
		}
	
}


class HashCodeDemo
{
	public static void main(String a[])
	{
		Demo  obj = new Demo(11,21);
		
		System.out.println("HAshCode of the obj is:" +obj.hashCode());
	}
}