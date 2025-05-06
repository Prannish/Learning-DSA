#include<stdio.h>
#include<stdlib.h>
#define size 4
int top = -1, inp_arr[size];
void push();
void pop();
void show();
main()
{
    int choice;
    while(1)
    {
        printf("\n Perform operations on the stack:");
        printf("\n 1.Push the element ");
        printf("\n 2.Pop the element ");
        printf("\n 3.Show");
        printf("\n 4.End");
        printf("\n Enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("/n Invalid choice");
        }
    }
}
void push()
{
    int x;
    if(top == size - 1)
    {
        printf("\n Overflow");
    }
    else
    {
        printf("\n Enter the element to be added onto the stack: ");
        scanf("%d",&x);
        top= top+1;
        inp_arr[top]= x;
    }
}
void pop()
{
    if (top== -1)
    {
        printf("\n Underflow");
    }
    else
    {
        printf("\n Popped element: %d", inp_arr[top]);
        top = top - 1;
    }
}
void show()
{
    if (top == -1)
    {
        printf("\n underflow");
    }
    else
    {
        printf("\n Elements present in the stack: \n");
        for (int i =top; i>=0; --i)
            printf("%d\n", inp_arr[i]);
    }
}
