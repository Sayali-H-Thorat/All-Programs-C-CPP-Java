//Interface is a blue print of a class which contains ALL abstracts method
//Interface achieves 100% abstraction
//Interface cha object create hot nahi, Implement karu shakto, Reference create karu shakato, 
interface Circle
{
	float PI = 3.14f;                     //public static final float = 3.14f;
	
	float Area(float Radius);            //public abstract float Area(float Radius);
	float Circumference(float Radius);   //public abstract float Area(float Radius);
	
}
class Marvellous implements Circle
{
	public float Area(float Radius)
	{
		return PI * Radius * Radius;
	}
	public float Circumference(float Radius)
	{
		return 2 * PI * Radius;
	}
	
	
}
class InterfaceDemo
{
	public static void main(String Arr[])
	{
		System.out.println("Value of PI is : "+Circle.PI);  //public static final characteristics 
		//Circle.PI = 7.12f;  cannot assign a value to final variable PI gives this error
		
		Circle cobj = new Marvellous();   //upcasting
		float Ret = 0.0f;
		Ret = cobj.Area(10.5f);
		System.out.println("Area is :"+Ret);
		Ret = cobj.Circumference(10.5f);
		System.out.println("Circumference is :"+Ret);
		
	}
}