//Number is divisible by 5 or not using equal to 

#include<stdio.h>

int DivisibleByFive(int iNo)
{
    if(iNo %5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = DivisibleByFive(iValue);
    if(iRet == 0)
    {
        printf(" %d Number is not divisible by 5:\n", iValue);
    }
    else
    {
        printf("%d Number is divisible by 5:\n", iValue);
    }


    return 0;
}