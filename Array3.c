#include<stdio.h>

int main()
{
	int Arr[4] = {10,20};
	int Brr[4];
	
	printf("%d\n",Arr[0]);   //10
	printf("%d\n",Arr[1]);   //20
	printf("%d\n",Arr[2]);   //? ethe 0 ch yenar
	printf("%d\n",Arr[3]);   //? ethe 0 ch yenar
	
	
	
	Brr[0] = 10;
	Brr[1] = 20;
	
	printf("%d\n",Arr[0]);   //10
	printf("%d\n",Arr[1]);   //20
	printf("%d\n",Arr[2]);   //? ethe garbage kinva 0 yet
	printf("%d\n",Arr[3]);   //? ethe garbage kinva 0 yet
	
	return 0;
}