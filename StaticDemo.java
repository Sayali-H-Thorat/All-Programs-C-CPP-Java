//If everyone becomes passionate developer then company present and future will be bright
class StaticDemo
{
	static   //Main chya pn aadi ha static block call hoto
	{
		System.out.println("Inside static block of StaticDemo class which contains main ");
	}
	public StaticDemo()  //staticDemo cha object create hot nahi mhanun ha constructor call hot nahi
	{
		System.out.println("Inside StaticDemo constructor");
	}
	public static void main(String arg[])
	{
		System.out.println("Inside main");
		System.out.println("Value of static No3: "+Demo.No3);  //Demo::No3
		System.out.println("Value of static No4: "+Demo.No4);  //Demo::No4
		Demo.gun();   //Demo::gun()
		
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		obj1.Fun();
	}
}
class Demo
{
	public int No1;           //non static characteristices
	public int No2;           //non static characteristices
	public static int No3;   //static characteristices
	public static int No4;    //static characteristices
	
	static      //static block
	{
		System.out.println("Inside static block of Demo");
		No3 = 51;
		No4 = 101;
		
	}
	public Demo()   //Constructor
	{
		System.out.println("Inside Constructor");
		No1 = 11;
		No2 = 21;
		
	}
	public void Fun()  //non static method
	{

		
		System.out.println("Inside non static method fun");
		System.out.println("Value of No1: "+this.No1);  //We can use this keyword in static
		System.out.println("Value of No2: "+this.No2);  //non Static method can access static as well as non static data
		System.out.println("Value of No3: "+this.No3);  //non Static method can access static as well as non static data
		System.out.println("Value of No4: "+this.No4);  //non Static method can access static as well as non static data
	}
	public static void gun()   //static method
	{
		//Static method can access only static data
		
		System.out.println("Inside static method gun");
		//System.out.println("Value of No1: "+this.No1);  //We cant use this keyword in static
		//System.out.println("Value of No1: "+No1);       //Static method can access only static data
		//System.out.println("Value of No2: "+No2);       //Static method can access only static data
		System.out.println("Value of No3: "+No3);
		System.out.println("Value of No4: "+No4);
	}
}
/*You want to do a class and study for high pkg
10-12 hours a day or 20 hr
Consistency is the key to success
PPA study
Read whole book of PPA and write down what you not understand.
2nd day: Read which you not understand
3rd Day: Remember everything whatever you read. Paath karu nka.
Note down the points which you are going to speak for interview
4th day: 1 topic discription and one code 1st half and in 2nd half 250 questions of assignment read any random question and remember that topic 
*/

/*LB
only coding
class che sagle Programs samjun gyayche n same program swata type karaycha swatak dok n laavta.
Assignments are in fill in the blank formats.
*/
