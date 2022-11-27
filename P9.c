//Check whether no is divisible by 3 and 5 by using boolean and && operator and nested if condition
#include<stdio.h>
#include<stdbool.h>

bool DivByFivenThree(int iValue)
{
    if(iValue %5 == 0)
    {
        if(iValue % 3 ==0)
        {
            return true;
        }
        else
        {
            return false;
        }
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

    bRet = DivByFivenThree(iNo);
    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5", iNo);
    }
    else
    {
        printf("%d is not divisible by 3 and 5", iNo);
    }

    return 0;

}
