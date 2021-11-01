//program to find n prime numbers 
//by aravindh s
//date modified 31/10/21
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
/* output:
prime number calculation
Enter the number to find how many prime number:7
2 3 5 7 11 13 17 
*/