//Multiplication of two numbers

#include<stdio.h>

int Mult(int iValue1, int iValue2)
{
    int iAns = 0;

    iAns = iValue1 * iValue2;

    return iAns;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter first number : \n");
    scanf("%d", &iNo1);

    printf("Enter second number : \n");
    scanf("%d", &iNo2);

    iRet = Mult(iNo1, iNo2);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}