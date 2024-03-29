/*
Doubly Linked list
Author:Shantanu Sharma
Date Modified: 6th October 2021
*/

#include<stdio.h>
#include<conio.h>

//structure for node
struct node
{
    int data;
    struct node *next,*pre;
};
struct node *head,*temp,*newnode;


//create new node
void create(int x)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    newnode->pre = NULL;

    if(head == NULL)
        head = temp = newnode;
    else
    {
        temp->next = newnode;
        newnode->pre = temp;
        temp = newnode;
    }
}

//Display Linked list
void display_ori()
{
    temp=head;
    if(head == NULL)
        printf("empty doubly linked list");
    else
    {
        while(temp != NULL)
    {
        printf("original doubly linked list is: %d\n",temp->data);
        temp = temp->next;
    }
}
}

//Display in reverse
void display_rev()
{
    temp = newnode;
    printf("reverse of dobly linked list: ");
    if(head == NULL)
        printf("\nDoubly linked list is empty");
    else
    {
        while(temp != NULL)
        {
            printf("\n%d",temp->data);
            temp = temp->pre;
        }
    }
}

void main()
{
   create(2);
   create(8);
   create(12);
   create(18);
   create(23);
   create(33);

   display_ori();
   display_rev();
}





