#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
	int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)   
	{
		if((iNo % iCnt) != 0)
		{
			iSum1 = iSum1 + iCnt;	
		}
	}
	//return iSum1;

    for(iCnt = 1; iCnt < iNo; iCnt++)   
	{
		if((iNo % iCnt) == 0)
		{
			iSum2 = iSum2 + iCnt;	
		}
	}
	//return iSum2;

    for(iCnt = 1; iCnt < iNo; iCnt++)   
	{
        iDiff = iSum1 - iSum2;
    }
	return iDiff;
   
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference between factors and non factors is:\t", iRet);

    return 0;
}