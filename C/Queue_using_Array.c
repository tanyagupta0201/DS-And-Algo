/*
Author: Shantanu Sharma
Date Modified: 9th October 2021
*/
#include<stdio.h>
int n=100;
int a[100],rear=-1,front=-1;

void enqueue()
{
    int x;
    printf("\nenter the data to be enqueued: ");
    scanf("%d",&x);
    if(rear==-1 && front==-1)
    {
     rear=front=0;
     a[0]=x;
    }
    else if(rear==n-1)
    {
        printf("\n Overflow condition");

    }
    else
    {
        rear++;
        a[rear]=x;
    }
}

void dequeue()
{
    if (front==-1)
    {
        printf("\nUndreflow condition");
    }
    else if(front==rear)
    {
        printf("\nDequed element is: %d",a[front]);
        rear=front=-1;
    }
    else
    {
        printf("\nDequeued element is: %d",a[front]);
        front++;
    }

}

void display()
{
    int i;
 if (rear==-1 && front==-1)
 {
     printf("\nQueue is empty");
 }
 else
 {
     printf("\nElements of queue are: ");
     for(i=front;i<=rear;i++)
     {
         printf("\n%d",a[i]);
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
