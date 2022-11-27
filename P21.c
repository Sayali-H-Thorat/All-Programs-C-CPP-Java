//Display sum of factors 
#include<stdio.h>
#include<stdbool.h>

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
bool CheckPerfect(int iData)
{
    int iAns = 0;

    iAns = SumofFactors(iData);

    if(iAns == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d", &iNo);

    bRet = CheckPerfect(iNo);
    if(bRet == true)
    {
        printf("%d Number is perfect \n", iNo);
    }
    else
    {
        printf("%d Number is not perfect \n", iNo);
    }

    return 0;
    
}