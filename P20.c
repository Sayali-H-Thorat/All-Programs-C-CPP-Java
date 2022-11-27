//Display sum of factors 
#include<stdio.h>

int SumofFactors(int iValue)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <=(iValue/2); iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    iRet = SumofFactors(iNo);

    printf("Summation of factors :%d\n", iRet);
    
}