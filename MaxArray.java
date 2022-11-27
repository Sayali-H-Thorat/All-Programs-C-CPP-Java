import java.util.Scanner;

public class MaxArray 
{  
    public static void main(String[] args) 
	{  
        int iCnt = 0;
        
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array:");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		int max = Arr[0]; 
		
		System.out.println("Enter the elements of array:");
		for(iCnt = 0; iCnt <Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		System.out.println("Elements of array:");
		for(iCnt = 0; iCnt <Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
        
        for (iCnt = 0; iCnt < Arr.length; iCnt++) 
		{  
              
           if(Arr[iCnt] > max)  
               max = Arr[iCnt];  
        }  
		
        System.out.println("Largest element of given array is: " + max);  
    }  
}  