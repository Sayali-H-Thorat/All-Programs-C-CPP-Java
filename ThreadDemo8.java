class Demo extends Thread 
{
	public void run()  //Running
	{
		int i = 0;
		for(i = 1; i<= 10; i++)
		{
			try
			{
				System.out.println(Thread.currentThread().getName()+":"+i);
			
				Thread.sleep(500);  //waiting
			}
			catch(InterruptedException obj)
			{}
		}
	}
	
}
class ThreadDemo8
{
	public static void main(String a[]) 
	{
		System.out.println("Inside main thread");
		
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		Thread t1 = new Thread(obj1);  //New
		Thread t2 = new Thread(obj2);  //new
		
		t1.setName("First thread");
		t2.setName("Second thread");
		
		//using try catch
		try
		{
			//first t1 run and then t2 run
			t1.start();  
			t1.join(); 
		
			t2.start();
			t2.join();
		}
		catch(InterruptedException obj)	
		{}	
		
		
		System.out.println("End of main thread"); //Dead
		
		//Master bivi n sis mall example
		
	}
}