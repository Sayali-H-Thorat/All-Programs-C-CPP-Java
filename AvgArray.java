import java.util.Scanner;

class AvgArray 
{  
    public static void main(String[] args) 
	{  
        int iCnt = 0;
        
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array:");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter the elements of array:");
		for(iCnt = 0; iCnt <Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		
		/*System.out.println("Elements of array:");
		for(iCnt = 0; iCnt <Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}*/
        
		int iSum = 0;
		for (iCnt = 0; iCnt < Arr.length; iCnt++) 
		{  
            iSum = iSum + Arr[iCnt];	
            
        }
		System.out.println("Summation of Elements of array:" +iSum);
		
		int iAvg = 0;
		for (iCnt = 1; iCnt < Arr.length; iCnt++) 
		{  
            iAvg = iSum/Arr.length;	
            
        }
		System.out.println("Average of Elements of array:" +iAvg);
		
    }  
}  