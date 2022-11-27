#include<stdio.h>

//Initialise global variable
int No1 = 11;

//Non initialise global variable
int No2;

//Initialise static global variable
static int A = 10;

//Non Initialised static global variable
static int B;

//Function definition
void Demo()
{
	 int X = 10;
	 static int Y = 20;
	printf("Inside demo\n");
}

