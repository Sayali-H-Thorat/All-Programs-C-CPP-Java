
class GenericMethod
{
	public static <T> void Display(T Arr[])
	{
		for(int i =0; i<Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
		
	}
	public static void main(String Ar[])
	{
		Integer iArr[] = {10, 20, 30, 40};
		Display(iArr);
		
		Character cArr[] = {'a','b','c','d'};
		Display(cArr);
		
		Double dArr[] = {10.10,20.20,30.30,40.40};
		Display(dArr);
		
	}
}