//case 4
//Multiple inheritance not allowed object create kelyav method call kartana ambugity yete mhanun multiple inheritance allowed nahi
//Not allowed
class Demo
{
	int i;
	void fun()
	{}
	
}
class Hello
{
	int i;
	void fun()
	{}	
}
class Mrvellous extends Demo,Hello  //Error 
{
	
}