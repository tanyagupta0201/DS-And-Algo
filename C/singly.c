#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
}*head,*temp;
int ins_beg();
int ins_end();
int ins_mid();
int del_beg();
int del_mid1();
int del_end();
int print();
int main()
{
	int value,n=1;
	head=NULL;
	do{
        printf("\nEntere  the choice");
        printf("\n0.END");
        printf("\n1.Insert at begin");
        printf("\n2.Insert at end");
        printf("\n3.Insert at middle");
        printf("\n4.Delete at begin");
        printf("\n5.Delete at middle");
        printf("\n6.Delete at end");
        printf("\nChoice:");
        scanf("%d",&value);
        switch(value)
        {
            case 0: n=0;
                    break;
            case 1:ins_beg();print();
                   break;
            case 2:ins_end();print();
                   break;
            //case 3:ins_mid();print();
               //    break;
            //case 4:del_beg();print();
              //      break;
            //case 5:del_mid1();print();
              //      break;           
            //case 6:del_end();print();
              //      break;

            default:printf("\nInvalid !");
                    break;
        }

    }while(n==1);
    return(0);
    
}

int ins_beg()
{
	int val;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter value:");
	scanf("%d",&val);
	temp->data=val;
	temp->next=NULL;
	if(head==NULL)
		head=temp;
	else{
		temp->next=head;
		head=temp;
	}
	return(0);
}

int print()
{
        if(head==NULL)
    printf("\nList is empty!");
    else
    {   
    temp=head;
printf("\nList = ");
        while(temp!=NULL)
        {
          printf("%d->",temp->data);
          temp=temp->next;
        }
    }
   return(0); 
}

int ins_mid()
{
	
}

