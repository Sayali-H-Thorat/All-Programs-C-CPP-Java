//Print Marvellous 1, Marvellous 2... by using while loop
#include<stdio.h>

int Display(int iValue)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("Marvellous :%d\n", iCnt);
        iCnt++;

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