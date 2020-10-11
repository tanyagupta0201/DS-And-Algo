#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n)
{
    //Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}

int indexinsertion(int arr[],int size,int element,int capacity,int index)
{
   //Code for Insertion in array
   if(size>=capacity)
   {
       return -1;
   }
   for (int i = size-1; i>=index ; i--)
   {
       arr[i+1]=arr[i];
   }
   arr[index]=element;
   return 1;
   
}

int main()
{
    int arr[100]={1,7,9,0,5,7,44};
    int size=7,element=33,index=3;
    printf("The Array is:\n");
    display(arr,size);
    indexinsertion(arr,size,element,100,index);
    size=size+1;
    printf("Array after Insertion:\n");
    display(arr,size);
    return 0;
}