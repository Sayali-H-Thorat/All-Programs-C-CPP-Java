import java.util.*;

public class P23

{

public static void main(String args[ ])

{

Scanner in=new Scanner(System.in);

int c=0;

System.out.println("Enter the elements");

int a[ ]=new int[3];

for(int i=0;i<a.length;i++)

{

a[i]=in.nextInt();

}

for(int i=0;i<a.length;i++)

{

if(a[i]>=100&&a[i]<1000)

c++;

}

if(c==3)

System.out.println("All the numbers are three digit numbers");

else

System.out.println("All the numbers are not three digit numbers");

}

}