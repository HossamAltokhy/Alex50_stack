#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pNext;
}*pTop;

void stackPush(int data);
int stackPop();
int stackPeek();

int main()
{
    stackPush(1);
    stackPush(2);
    stackPush(3);
    stackPush(4);
    stackPush(5);


    while(pTop!=NULL)
    //printf("Data = %d\n", stackPeek());
    {printf("Data = %d\n", stackPop());}

    stackPop();


//    }
    return 0;
}

void stackPush(int data)
{

    struct node* pNode=(struct node *)malloc(sizeof(struct node));

    if(pNode != NULL)
    {
        pNode->pNext = pTop;
        pNode->data = data;
        pTop = pNode;
    }


}
int stackPop()
{
    int data =0;
    if(pTop != NULL)
    {
        struct node* pCur = pTop;
        pTop = pCur->pNext;
        data = pCur->data;

        free(pCur);
    }
    else {
        printf("\nStack is Empty!!\n");
    }


    return data;

}

int stackPeek(){

    if(pTop != NULL){
      return pTop->data;
    }
    else{
        printf("\nStack is Empty!!\n");
        return 0;
    }

}
