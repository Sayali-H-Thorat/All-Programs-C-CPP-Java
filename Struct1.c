#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InserFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->next = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InserFirst(&First,101);
    InserFirst(&First,51);
    InserFirst(&First,21);
    InserFirst(&First,11);

    iRet = SearchFirstOcc()
    return 0;
}
