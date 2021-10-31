#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*temp,*tail,*trav;
void createlist(int n){
    for(int i=0;i<n;i++){
        temp=(struct node *)malloc(sizeof(struct node));
        printf("enter the data ");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(temp==NULL)
        {
            printf("memory is not allocated");
        }
        else
        {
            if(head==NULL)
            {
                head=temp;
                tail=temp;
            }
            else
            {
                temp->next=head;
                tail->next=temp;
                tail=temp;
            }
        }
    }
}
void createnode(){
     temp=(struct node *)malloc(sizeof(struct node));
     printf("Enter the data to insert:");
     scanf("%d",&temp->data);
     temp->next=NULL;
}
void display()
{
    if(head==NULL)
    {
        printf("list empty");
    }
    else{
        temp=head;
        while(temp->next!=head)
        {
            printf("-->%d",temp->data);
            temp=temp->next;
        }
         printf("-->%d",temp->data);
    }
}
void insert_beg()
{
    createnode();
    if(head==NULL)
    printf("list is empty");
    else{
     temp->next=head;
     head=temp;
     tail->next=head;
    }
}
void insert_middle(){
    int data;
    createnode();
    printf("enter the data to insert after");
    scanf("%d",&data);
    if(head==NULL)
    printf("list is empty");
    else{
        trav=head;
        while(trav->data!=data)
        {
           trav=trav->next;
        }
         temp->next=trav->next;
            trav->next=temp;
    }
}
void insert_last()
{
    createnode();
    if(head==NULL)
    printf("list is empty");
    else
    {
     trav=head;
     while(trav->next!=head)
     {
        trav=trav->next;
     }
     trav->next=temp;
     temp->next=head;
    }
}
void delete_beg()
{
    if(head==NULL)
    printf("list is empty");
    else
    {
        temp=head;
        head=temp->next;
        tail->next=head;
        free(temp);
    }
}
void delete_middle()
{
    int data;
    printf("Enter the data be delete");
    scanf("%d",&data);
     if(head==NULL)
    printf("list is empty");
    else
    {
        temp=head;
        while(temp->data!=data)
        {
            trav=temp;
            temp=temp->next;
        }
        trav->next=temp->next;
        free(temp);
    }
}
void delete_last(){
    if(head==NULL)
    printf("list is empty");
    else{
        temp=head;
        while(temp->next!=head)
        {
            trav=temp;
            temp=temp->next;
        }
        trav->next=head;
        free(temp);
    }
}
int main(){
    int n,choice,press;
    printf("Enter the number of node:");
    scanf("%d",&n);
    createlist(n);
    display();
    do{
    printf("\n1.insert_beg.\n2.insert_middle\n3.insert_last");
     printf("1.delete_beg.\n2.delete_middle\n3.delete_last");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
           insert_beg();
           break;
        case 2:
           insert_middle();
           break;
        case 3:
           insert_last();
           break;
          case 4:
           delete_beg();
           break;
        case 5:
           delete_middle();
           break;
        case 6:
           delete_last();
           break; 
    }
    display();
    printf("\nDo you want to continue press 1:");
    scanf("%d",&press);
    }while(press==1);
}

