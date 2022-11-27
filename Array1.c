#include<stdio.h>

int main()
{
	//All the below memory allocations are static memory allocations
	
	//First way to initialise the array Member initialisation List.
	int Arr[40] ={10,20,30,40};
	
	//Second way member initialisation list without size
	int Brr[] = {10,20,30,40};
	
// Third way to initialise the array
    int Crr[4];
    // Member by meber initialisation
    Crr[0] = 10;
    Crr[1] = 20;
    Crr[2] = 30;
    Crr[3] = 40;

    return 0;
}

//static(early binding):how much memory should be allocated at the time when you write program.
//dynamic(late binding): how much memory should be allocated at the time when you run the program.