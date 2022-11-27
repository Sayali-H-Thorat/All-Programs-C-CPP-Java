//Check whether no is divisible by 3 and 5 using boolean and && operator

#include<stdio.h>
#include<stdbool.h>

bool DivByFivenThree(int iNo)
{
    int iAns = 0;
    if(((iNo % 3)==0) && ((iNo % 5) == 0))
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
    int bRet = false;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    bRet = DivByFivenThree(iValue);
    if(bRet == 0)
    {
        printf("%d is not divisible by 3 and 5", iValue);
    }
    else
    {
        printf("%d is divisible by 3 and 5", iValue);

    }
   
    return 0;
}