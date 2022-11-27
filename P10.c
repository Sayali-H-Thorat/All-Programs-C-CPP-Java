//print jay ganesh on screen using for loop and ask user how many iterations they want.
#include<stdio.h>

int Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
    
}
int main()
{
    int iNo = 0;

    printf("Enter how many iteration you want :\n");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}