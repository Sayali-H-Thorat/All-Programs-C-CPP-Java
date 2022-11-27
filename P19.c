//Factors of n number

#include<stdio.h>

void Factors(int iNo)
{
    int iCnt = 0;

    printf("Factors are :\n");

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;
    //int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    Factors(iValue);

    //printf("Factors of %d is %d\n",iValue, iRet);

    return 0;
}