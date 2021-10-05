/*
Authur: Shantanu Sharma
Date Modified: 5th October 2021
*/
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *rear=NULL,*front=NULL,*newnode;

void enqueue()
{
int x;
printf("\n enter the data to be enqueued: ");
scanf("%d",&x);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;

if (rear==NULL && front==NULL)
{
    front=rear=newnode;
}
else
{
    rear->next=newnode;
    rear=newnode;
}
}

void dequeue()
{
    if (front==NULL)
    {
        printf("\nUnderflow condition");
    }
    else if(front==rear)
    {
        printf("\nDequeued element is %d",front->data);
        free(front);
        front=NULL;
        rear=NULL;
    }
    else
    {
        printf("\nDequeued element is %d",front->data);
        struct node *temp=front;
        front=front->next;
        free(temp);

    }
}

void display()
{
    struct node *temp=front;
    if(rear==NULL && front==NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->next;
        }
    }
}


void main()
{
    int c;
    printf("\nCHOOSE FROM GIVEN CHOICES:- \n\n");
    printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT");
    scanf("%d",&c);
    while(c!=4)
    {
        switch(c)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            default: printf("\nwrong choice");

             break;

        }
        printf("\nCHOOSE FROM GIVEN CHOICES:- \n\n");
    printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT");
    scanf("%d",&c);

    }

}
