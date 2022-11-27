import java.util.Scanner;

public class JaggedArray 
{
    public static void main(String arg[])
    {
		int iCnt = 0;
		int jCnt = 0;

        Scanner sc=new Scanner(System.in);
        

        int iRow = 0;
        System.out.println("Enter the number of rows");
        iRow=sc.nextInt();     
        
        
        int arr[][] = new int[iRow][];
       
        System.out.println("Enter the number of columns ");
        for(iCnt =0; iCnt < iRow; iCnt++)
        {
            arr[iCnt]=new int[sc.nextInt()];
        }
    
        System.out.println("Enter the elements of Array");
        for (iCnt = 0; iCnt < arr.length; iCnt++)   
        {
            for (jCnt = 0; jCnt < arr[iCnt].length; jCnt++)
            {
                arr[iCnt][jCnt] = sc.nextInt();
            }
        }
 
        System.out.println("Elements of Array are");
        for (iCnt = 0; iCnt < arr.length; iCnt++)     
        {
            for (jCnt = 0; jCnt < arr[iCnt].length; jCnt++) 
            {
                System.out.print(arr[iCnt][jCnt] + " ");
            }
            System.out.println();
        }
    }
}
