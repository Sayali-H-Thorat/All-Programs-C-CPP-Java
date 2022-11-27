//setPriority()
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
class ThreadDemo11
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
		
		System.out.println("Priority of t1 is:" +t1.getPriority());
		System.out.println("Priority of t2 is:" +t2.getPriority());
		
		t1.start();  
		t2.start();
		
		t1.setPriority(10);
		t2.setPriority(2);
		
		System.out.println("Priority of t1 is:" +t1.getPriority());
		System.out.println("Priority of t2 is:" +t2.getPriority());
	
		//join mule main thread end kartana end la execute hoto
			
		t1.join();  //Waiting //t1 complete hot nahi toparyant next line la janar nahi
		t2.join();  //Waiting  //t2 complete hot nahi toparyant next line la janar nahi
		
		
		System.out.println("End of main thread"); //Dead
		
		//Master bivi n sis mall example
		
	}
}