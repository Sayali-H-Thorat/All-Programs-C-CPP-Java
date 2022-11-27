import java.net.*;
import java.io.*;

public class Server2
{
	public static void main(String A[]) throws Exception
	{
		System.out.println("Server application is running...");
		
		ServerSocket ss = new ServerSocket(2100);  //2100 port number
		System.out.println("Server is running ata port no 2100 and waiting for the client request");
		
		Socket s = ss.accept();
		System.out.println("Request of client gets accepted");
		
		PrintStream ps = new PrintStream(s.getOutputStream());
		
		BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
		BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
		
			
	}
}