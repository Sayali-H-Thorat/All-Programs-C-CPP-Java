//Print jay ganesh on screen using while loop and ask user how many iterations they want
#include<stdio.h>

int Display(int iValue)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("Jay Ganesh..\n");
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