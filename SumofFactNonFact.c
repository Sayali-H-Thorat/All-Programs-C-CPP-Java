#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
	int iSum2 = 0;
	

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;            
        }
    }
	for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum2 = iSum2 + iCnt;            
        }
    }
	return iSum2 - iSum1;
	//printf("Difference between sum of factors and non factors is :%d\n", iSum2 - iSum1);
   

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Difference between sum of factors and non factors is:%d\n", iRet);

    return 0;
}