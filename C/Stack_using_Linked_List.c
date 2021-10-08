/*
Author:Shantanu Sharma
Date Modified: 7th October 2021
*/
#include<stdio.h>
#include<conio.h>

//Stucture of node
struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL,*newnode,*temp;

//Performing push operation in stack
void push(int x)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = NULL;

    if(top == NULL)
    {
        top = newnode;
    }
    else{
        newnode->link = top;
        top = newnode;
    }
}


//Display function in stack
void display()
{
    temp=top;
    if(top == NULL)
        printf("Stack is empty");
    printf("The stack is: ");
    while(temp != NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->link;
    }
    printf("\n");
}


//Peek function in stack
void peek()
{
    if(top == NULL)
         printf("Stack is empty");
    else
        printf("%d\n",top->data);
}

//Deleting the top most element from stack
void pop()
{
    if(top == NULL)
        printf("UNDERFLOW CONDITION");
    else
    {
        printf("\nPOPED ELEMENT IS: %d\n",top->data);
        temp = top;
        top = top->link;
        free(temp);
    }
}

void main()
{
    int c = 0,x;
    while(c != 5)
    {
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:printf("\n\nenter element to be pushed: ");
            scanf("%d",&x);
            push(x);
            break;
            case 2:pop();
            break;
            case 3: display();
            break;
            case 4: peek();
            break;
            case 5: break;
            default: printf("\n wrong input pls choose from given options: \n\n");
            break;
        }
    }
}
