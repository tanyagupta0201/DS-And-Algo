// program to do queue using linked list
//contributed by afeef thameem
//date modified 1/11/21
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front,*rear,*temp;
void enqueue();
void dequeue();
void display();
int main()
{
    int choice;
    
    while(1)
    {
        printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.End\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:{
                enqueue();
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                exit(0);
            }
        }
    }
}
void enqueue()
{
    temp=(struct node *)malloc (sizeof (struct node));
    printf("Enter data:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if (front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        front->next=temp;
        front=front->next;
    }
}
void dequeue()
{
    if(rear==NULL)
    {
        printf("queue is underflow \n");
    }
    else
    {
        printf(" dequeued element =%d\n",rear->data);
        rear=rear->next;
    }
    
}
void display()
{
    temp=rear;
    printf("Queue :\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
/*
output:

1.Enqueue
2.Dequeue 
3.Display 
4.End
1
Enter data:5

1.Enqueue 
2.Dequeue 
3.Display 
4.End
1
Enter data:4

1.Enqueue 
2.Dequeue 
3.Display 
4.End
3
Queue :
5
4

1.Enqueue 
2.Dequeue 
3.Display 
4.End
2
 dequeued element =5

1.Enqueue 
2.Dequeue 
3.Display 
4.End
Queue :
4

1.Enqueue 
2.Dequeue 
3.Display 
4.End
4
*/