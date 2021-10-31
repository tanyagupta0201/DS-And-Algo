/*
  C Program to Implement a Stack using Linked List
  Author : Sonu Kumar (SonuKr23)
  Date modified : 31 October 2021
 */

#include <stdio.h>
#include <stdlib.h>
struct node 
{
        int info;
        struct node * ptr;
}* top, * top1, * temp;

int topelement();
void push(int data);
void pop();
void empty();
void display();
void destroy();
void stack_count();
void create();

int count = 0;

void main() 
{
        int no, ch, e;

        printf(" 1 - Push");
        printf(" 2 - Pop");
        printf(" 3 - Top");
        printf(" 4 - Empty");
        printf(" 5 - Exit");
        printf(" 6 - Dipslay");
        printf(" 7 - Stack Count");
        printf(" 8 - Destroy stack");

        create();

        while (1) {
                printf(" Enter choice : ");
                scanf("%d", & ch);

                switch (ch)
                {
                case 1:
                        printf("Enter data : ");
                        scanf("%d", & no);
                        push(no);
                        break;

                case 2:
                        pop();
                        break;
                case 3:
                        if (top == NULL)
                                printf("No elements in stack");
                        else 
                        {
                                e = topelement();
                                printf(" Top element : %d", e);
                        }
                        break;
                case 4:
                        empty();
                        break;
                case 5:
                        exit(0);
                case 6:
                        display();
                        break;
                case 7:
                        stack_count();
                        break;
                case 8:
                        destroy();
                        break;
                default:
                        printf(" Wrong choice, Please enter correct choice  ");
                        break;
                }
        }
}
/* Create empty stack */
void create()
{
        top = NULL;
}

/* Count stack elements */
void stack_count()
{
        printf(" No. of elements in stack : %d", count);
}

/* Push data into stack */
void push(int data) 
{
        if (top == NULL)
        {
                top = (struct node * ) malloc(1 * sizeof(struct node));
                top -> ptr = NULL;
                top -> info = data;
        } 
        else
        {
                temp = (struct node * ) malloc(1 * sizeof(struct node));
                temp -> ptr = top;
                temp -> info = data;
                top = temp;
        }
        count++;
}

/* Display stack elements */
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
                printf("%d ", top1 -> info);
                top1 = top1 -> ptr;
        }
}

/* Pop Operation on stack */
void pop()
{
        top1 = top;
        if (top1 == NULL)
        {
                printf(" Error : Trying to pop from empty stack");
                return;
        } else
                top1 = top1 -> ptr;
        printf(" Popped value : %d", top -> info);
        free(top);
        top = top1;
        count--;
}

/* Return top element */
int topelement()
{
        return (top -> info);
}

/* Check if stack is empty or not */
void empty() 
{
        if (top == NULL)
                printf(" Stack is empty");
        else
                printf(" Stack is not empty with %d elements", count);
}

/* Destroy entire stack */
void destroy() 
{
        top1 = top;

        while (top1 != NULL)
        {
                top1 = top -> ptr;
                free(top);
                top = top1;
                top1 = top1 -> ptr;
        }
        free(top1);
        top = NULL;

        printf(" All stack elements destroyed");
        count = 0;
}

/*
Output:

 1 - Push
 2 - Pop
 3 - Top
 4 - Empty
 5 - Exit
 6 - Dipslay
 7 - Stack Count
 8 - Destroy stack
 Enter choice : 1
 Enter data : 56
  
 Enter choice : 1
 Enter data : 80
  
 Enter choice : 2
  
 Popped value : 80
 Enter choice : 3
  
 Top element : 56

 Enter choice : 1
 Enter data : 78
  
 Enter choice : 1
 Enter data : 90
  
 Enter choice : 6
 90 78 56
 Enter choice : 7
  
 No. of elements in stack : 3
 Enter choice : 8
  
 All stack elements destroyed
 Enter choice : 4
  
 Stack is empty
 Enter choice : 5
 */
