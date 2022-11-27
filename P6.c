//Number is divisible by 5 or not by using boolean

#include<stdio.h>
#include<stdbool.h>

bool DivisibleByFive(int iValue)
{
    int iAns = 0;
    if(iValue % 5 == 0)
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

    bRet = DivisibleByFive(iNo);
    if(bRet == 0)
    {
        printf("%d is not divisible by 5", iNo);
    }
    else
    {
        printf("%d is divisible by 5", iNo);
    }

    return 0;
}