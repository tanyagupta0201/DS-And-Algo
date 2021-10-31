/*
Name of the author - AATARSH K.M
date modified - 30/10/2021
 */
#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node *next;
}*top,*top1,*temp;

void push();
void pop();
void display();
int main()
{
int ch;
printf("\n 1 - Push");
printf("\n 2 - Pop");
printf("\n 3- Dipslay");


while (1)
{
printf("\n Enter choice :");
scanf("%d", &ch);
switch (ch)
{
case 1:

push();
break;
case 2:
pop();
break;

case 3:
display();
break;

default :
printf("error");
break;
}
}
}




void push()
{
    int x;
    printf("enter the data");
    scanf("%d",&x);
    temp =(struct node *)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;

if (top == NULL)
{
    top=temp;
}
else
{


temp->next = top;

top = temp;
}

}

void display()
{
top1 = top;
if (top1 == NULL)
{
printf("Stack is empty");
return;
}
while (top1 != NULL)
{
printf("%d ", top1->data);
top1 = top1->next;
}
}

void pop()
{

if (top == NULL)

{
printf("\n stack underflow");
return;
}
else
{
    
printf("\n Popped value : %d", top->data);
top=top->next;



}
}
/*
OUTPUT
1 - Push
 2 - Pop
 3- Dipslay
 Enter choice :1
enter the data2

 Enter choice :1
enter the data3

 Enter choice :1
enter the data4

 Enter choice :2

 Popped value : 4
 Enter choice :3
3 2  */
