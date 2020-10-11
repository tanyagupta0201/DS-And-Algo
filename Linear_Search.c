#include<stdio.h>

void display(int arr[], int n)
{
  for(int i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
  printf("\n");
}
 
int LinearSearch(int arr[],int n,int element)
{   int i;
    int flag;
    for ( i = 0; i < n; i++)
    {
        if(element==arr[i])
        {   
            flag=1;
            break;
       }
    }
    if(flag==1)
    {
         printf("Element Found:\n At Position: %d",i);
    }
    else
    {
        printf("OOPS!!! Element not found");
    }
    
}

int main()
{   int arr[100]={1,2,5,9,3,5,6};
    int size=7,element;
    printf("enter element to be searched: ");
    scanf("%d",&element);
    printf("The array is: ");
    display(arr,size);
    LinearSearch(arr,size,element);
    return 0;
}