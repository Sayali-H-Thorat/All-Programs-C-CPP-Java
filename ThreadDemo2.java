//Java does not support multiple inheritance hence it provides extends thread class and iplements runnable interface concept
class Demo implements Runnable 
{
	public void run()
	{
		int i = 0;
		for(i = 1; i< 10; i++)
		{
			System.out.println(i); 

		}
	}
	
}
class ThreadDemo2
{
	public static void main(String a[])
	{
		System.out.println("Inside main thread");
		
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		Thread t1 = new Thread(obj1);
		Thread t2 = new Thread(obj2);
		
		t1.start();
		t2.start();
		
		
		
	}
}