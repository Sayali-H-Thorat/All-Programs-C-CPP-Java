//Traversal of array using for loop in java
class Loops
{
	public static void main(String arg[])
	{
		int Arr[] = {10,20,30,40};
		int iCnt = 0;
		
		System.out.println("Traversal of array using for loop");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)  //Same in C, C++,JAVA
		{
			System.out.println(Arr[iCnt]);
		}
		
		System.out.println("Traversal of array using while loop");
		iCnt = 0;
		while(iCnt < Arr.length)    //Same in C, C++,JAVA (Loop is same not .lenght)
		{
			System.out.println(Arr[iCnt]);
			iCnt++;
		}
		
		System.out.println("Traversal of array using do while loop");
		iCnt = 0;
		do//Same in C, C++,JAVA (Loop is same not .lenght)
		{
			System.out.println(Arr[iCnt]);
			iCnt++;
		}while(iCnt < Arr.length);
		
		System.out.println("Traversal of array using for-each loop");
		for(int iNo : Arr)    //Only in Java 
		{
			System.out.println(iNo);
		}
	}
}

//For remembering loop example Mickie mouse in Yatra one person is taking money and then give entry to children
//while aadi condition check karto tyamule condition true asel tr ch while run hoto
//Do while ekda tari run hoto