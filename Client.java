import java.net.*;
import java.io.*;

public class Client
{
	public static void main(String A[]) throws Exception
	{
		System.out.println("Client application is running...");
		
		Socket s = new Socket("localhost",2100);  //(localhost(IP address)2100(port number))//localhost SBI address and 2100 Port/counter number
		System.out.println("Client is waiting for ser server to accept the request");
		
		
		
		
	}
}