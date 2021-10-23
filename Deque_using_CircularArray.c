/** Author's Name : Loveena Ramchandani
Date modified : 23/10/2021
**/
#include<stdio.h>
#include<stdlib.h>
#define N 5
int deque[N];
int front=-1;
int rear=-1;
void enqueue_front();
void enqueue_rear();
void dequeue_front();
void dequeue_rear();
void getfront();
void getrear();
void display();
int main(void)
{
	int ch;
    while(1)
    {
	printf("Double Ended Queue Operations:\n");
	printf("1.Enqueue from front\n");
	printf("2.Enqueue from rear\n");
	printf("3.Dequeue from front\n");
	printf("4.Dequeue from rear\n");
	printf("5.Get front value\n");
	printf("6.Get rear value\n");
	printf("7.Display\n");
	printf("8.Quit\n");
	int ch;
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			enqueue_front();
			break;
		case 2:
			enqueue_rear();
			break;
		case 3:
			dequeue_front();
			break;
		case 4:
			dequeue_rear();
			break;
		case 5:
			getfront();
			break;
		case 6:
			getrear();
			break;
		case 7:
			display();
			break;
		case 8:
			exit(0);
			break;
		default:
			printf("Invalid Choice");
	}
   }
}
void enqueue_front()
{
	if((front==0&&rear==N-1)||(front==rear+1))
	{
		printf("Queue is full");
	}
	else
	{
	  int x;
	  printf("Enter element:");
	  scanf("%d",&x);
      if((front==-1)&&(rear==-1))
	 {
		front=0;
		rear=0;
		deque[front]=x;
	 }
	 else if(front==0)
	 {
	 	front=N-1;
	 	deque[front]=x;
	 }
	 else
	 {
	 	front--;
	 	deque[front]=x;
	 }
   }
}
void enqueue_rear()
{
   if((front==0&&rear==N-1)||(front==rear+1))
	{
		printf("Queue is full");
	}
	else
	{
	  int x;
	  printf("Enter element:");
	  scanf("%d",&x);
      if((front==-1)&&(rear==-1))
	 {
		front=0;
		rear=0;
		deque[rear]=x;
	 }	
	 else if(rear==N-1)
	 {
	 	rear=0;
	 	deque[rear]=x;
	 }
	 else
	 {
	 	rear++;
	 	deque[rear]=x;
	 }
    }
}
void dequeue_front()
{
	if(front==-1&&rear==-1)
	{
		printf("Queue is empty");
	}
	else if(front==rear)
	{
		printf("The dequeued element is %d.\n",deque[front]);
		front=-1;
		rear=-1;
	}
	else if(front==N-1)
	{
		printf("The dequeued element is %d.\n",deque[front]);
		front=0;
	}
	else
	{
		printf("The dequeued element is %d.\n",deque[front]);
		front++;
	}
}
void dequeue_rear()
{
	if(front==-1&&rear==-1)
	{
		printf("Queue is empty");
	}
	else if(front==rear)
	{
		printf("The dequeued element is %d.\n",deque[rear]);
		front=-1;
		rear=-1;
	}
	else if(rear==0)
	{
		printf("The dequeued element is %d.\n",deque[rear]);
		rear=N-1;
	}
	else
	{
		printf("The dequeued element is %d.\n",deque[rear]);
		rear--;
	}
}
void getfront()
{
	if(front==-1&&rear==-1)
	{
		printf("Queue is empty.\n");
	}
	else
	{
		printf("The front element is %d.\n",deque[front]);
	}
}
void getrear()
{
	if(front==-1&&rear==-1)
	{
		printf("Queue is empty.\n");
	}
	else
	{
		printf("The rear element is %d.\n",deque[rear]);
	}
}
void display()
{
	if(front==-1&&rear==-1)
	{
		printf("Queue is empty.\n");
	}
	else
	{
		int i=front;
		while(i!=rear)
		{
			printf("%d\t",deque[i]);
			i=(i+1)%N;
		}
		printf("%d\n",deque[i]);
	}
}
