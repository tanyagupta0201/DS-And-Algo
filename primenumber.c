#include<stdio.h>  
int main()
{    
int n,i,m=0,count=0,r=0;    
printf("prime number calculation");
printf("\nEnter the number to find how many prime number:");
scanf("%d",&n);    
for(i=2;i<=100;i++)    
{
    for(int j=1;j<=100;j++)
    {
        if(i%j==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d ",i);
        r++;
    }
    if(r==n)
    {
        break;
    }
    count=0;
} 
}