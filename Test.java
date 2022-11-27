class Test
{
	public static void main(String arg[])
	{
		Thread t = new Thread();
		Object o = new Object();
		String s = new String("VELOTIO");
		System.out.println(t == o);
		System.out.println(o == s);
		//System.out.println(t == s);
	}
}