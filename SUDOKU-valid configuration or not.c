/*Name of the author:Bhagyashree N M
Date of modification:22/11/2021*/
 //C program to SUDOKU-valid configuration or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int n,i,j,num;
    int *arr;
    printf("Enter N\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*n*sizeof(int));
    bool found=true;
    printf("Enter a completed Sudoko solution\n");
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
       scanf("%d",(arr+i*n+j));
    for(i=0;i<n;i++)
    {
        num=*(arr+i*n+0);
        for(j=i+1;j<n;j++)
        {
            if(num==*(arr+i*n+j))
            {
                found=false;
                break;
            }
        }
        if(found==false)
        {
            printf("no");
            exit(0);
        }
    }
  for(j=0;j<n;j++)
    {
        num=*(arr+j*n+0);
        for(i=j+1;i<n;i++)
        {
            if(num==*(arr+j*n+i))
            {
                found=false;
                break;
            }
        }
        if(found==false)
        {
            printf("no");
            exit(0);
        }
    }
    printf("yes");
    return 0;


}
