//StringBuffer is synchronized Don pashi notes. sagle serially janar. More Time consuming. We can change data here.Multi Threaded
//StringBuilder is not synchronized table vr notes any one can come and take the notes. Less time consuming. We can change data here.Single Threaded
//4 burner gas example(poli, bhaji, daal, bhaat(40 Min))for multithreaded(Synchronized)
//4 burner gas example(poli, bhaji, daal, bhaat(25 Min))for multithreaded(Non synchronized)
//For multithreading there is no need to import any package and it is available in java.lang pkg
class ThreadDemo1
{
	public static void main(String a[])
	{
		System.out.println("Inside main function");
		
		System.out.println("Name of current thread is:" +Thread.currentThread().getName());
	}
}