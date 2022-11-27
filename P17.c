//Summation of n numbers using while loop
#include<stdio.h>

int Summation(int iNo)
{
    int iAns = 0;
    int iCnt = 0;

    iCnt = 0; 
    while(iCnt <= iNo)
    {
        iAns = iAns + iCnt;
        iCnt++;
    }
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = Summation(iValue);

    printf("Summation of is %d\n",iRet);
}