#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Arr[5];     //Static memory allocation
	
	int *p = NULL;
	
	p = (int *)malloc(sizeof(int) * 5);
	
	//Use the memory
	
	free(p);
	
	//Code
		
	return 0;    // Memory of Arr gets deallocated at this point
}



//Denara address det asel tr to pointer mde gyaych.
// Aai bayko kaku n aaji.. Ek motha gajra n to 4 piece mde cut karaycha(Plotting/ typecasting)... 
//Void * is return value of malloc
//