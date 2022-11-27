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
class ThreadDemo7
{
	public static void main(String a[]) throws InterruptedException
	{
		System.out.println("Inside main thread");
		
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		Thread t1 = new Thread(obj1);  //New
		Thread t2 = new Thread(obj2);  //new
		
		t1.setName("First thread");
		t2.setName("Second thread");
		
		t1.start();  //t1 schedule hoto   //Runnable
		t2.start();  //t2 schedule hoto   //Runnable
	
		//join mule main thread end kartana end la execute hoto
			
		t1.join();  //Waiting //t1 complete hot nahi toparyant next line la janar nahi
		t2.join();  //Waiting  //t2 complete hot nahi toparyant next line la janar nahi
		
		
		System.out.println("End of main thread"); //Dead
		
		//Master bivi n sis mall example
		
	}
}