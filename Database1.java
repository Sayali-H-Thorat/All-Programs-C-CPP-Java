import java.sql.*;  //step 1

class Database1
{
	public static void main(String arg[]) throws Exception
	{		
		Connection cobj = DriverManager.getConnection("jdbc:mysql://localhost:3306/ppa41","root","root");  //Step 2
		
		System.out.println("Connction successfull!!!");
		
		Statement sobj = cobj.createStatement();   //Step 3
		
		ResultSet robj = sobj.executeQuery("select * from Student");  //Step 4
		
		while(robj.next())  //Step 5
		{
			System.out.println("___________________________________");
			System.out.println("RID :"+robj.getInt("RID"));			
			System.out.println("Name :"+robj.getString("Name"));
			System.out.println("City :"+robj.getString("City"));
			System.out.println("Marks :"+robj.getInt("Marks"));
			System.out.println("___________________________________");
			
		}
		
		cobj.close();
		sobj.close();
		robj.close();
		
		
	}
}