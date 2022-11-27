//Print Marvellous 1, Marvellous 2... by using for loop
#include<stdio.h>

int Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Marvellous :%d\n", iCnt);

    }
    
}
int main()
{
    int iNo = 0;

    printf("Enter how many iterations you want :\n");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}