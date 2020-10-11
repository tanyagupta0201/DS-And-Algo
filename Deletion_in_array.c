#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int n)
{  
  //Code For Traversal
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");

}
int deletionarray(int arr[],int size,int index)
{  
   //Code For Deletion
   for (int i = index; i < size-1; i++)
   {
       arr[i]=arr[i+1];
   }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10,index=5;
    printf("The Array is:\n");
    display(arr,size);
    deletionarray(arr,size,index);
    size-=1;
    printf("Array after deletion: \n");
    display(arr,size);
    return 0;
}