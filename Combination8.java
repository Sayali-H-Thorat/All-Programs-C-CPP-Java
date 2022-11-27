//Case8
//Allowed
//one interface can inherit another interface

interface Demo
{
	void fun();
	
	
}
interface Hello extends Demo
{
	void gun();
	
}

class Marvellous implements Hello
{
	void fun()
	{}
	void gun()
	{}
}