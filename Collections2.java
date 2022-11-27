import java.util.*;

class Collections2
{
	public static void main(String arg[])
	{
		LinkedList<String> lobj = new LinkedList<String>();
		
		lobj.add("Kapil");
		lobj.add("Aditya");
		lobj.add("Rohan");
		lobj.add("Rutik");
		lobj.add("Tejas");
		
		System.out.println("Elements of linkedlist are:"+lobj);
		
		lobj.addFirst("Prachi");
		System.out.println("Elements of linkedlist after add at 1st pos are:"+lobj);
		
		lobj.addLast("Sayali");
		System.out.println("Elements of linkedlist after add at Last pos are:"+lobj);
		
		Iterator iobj = lobj.iterator();
		System.out.println("Data using iterator is:");
		while(iobj.hasNext())
		{
			System.out.println(iobj.next());
		}
		
		if(lobj.contains("Rohan"))
		{
			System.out.println("Rohan is present in LL");
		}
		else
		{
			System.out.println("Rohan is not present in LL");
		}
		
		lobj.remove();
		System.out.println("Elements of linkedlist after removing 1st name are:"+lobj);

        lobj.remove(0);
		System.out.println("Elements of linkedlist after removing oth pos element are:"+lobj);
		
		lobj.removeLast();
		System.out.println("Elements of linkedlist after removing Last element are:"+lobj);
		
		System.out.println("Number of elements are:"+lobj.size());
		
		lobj.set(0,"Sagar");
		System.out.println("After adding name at 1st Elements of linkedlist are:"+lobj);
		
		
		
		lobj.clear();
		System.out.println("Elements of linkedlist are:"+lobj);


	}
}
