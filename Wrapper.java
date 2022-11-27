import java.io.*;

class Wrapper
{
	public static void main(String A[])
	{
		int no = 11;
		
		Integer iobj = new Integer(no);   //Boxing - Converting primitive to wrapper
		
		System.out.println(no);
		System.out.println(iobj);
		
		int x = iobj;   //unboxing - Converting wrapper to primitive
		System.out.println(x);
	}  
}