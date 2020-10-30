#include<stdio.h>
void printArray(int *a,int n)
{
   for (int i = 0; i < n; i++)
   {
       printf("%d ",a[i]);
   }
   printf("\n");
}
void BubbleSort(int *a,int n)
{   
    int temp;
    for (int i = 0; i < n-1; i++)  //For number of Passes
    {
      for (int j = 0; j < n-i-1; j++)  //For Comparison in each Pass
      {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
      
    }
    
}
int main()
{
    int n;
    int a[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("The Elements of Array before sorting: ");
    printArray(a,n); //Print the elements Before Sorting
    BubbleSort(a,n); //Function To sort the array
    printf("The Elements of Array after sorting: ");
    printArray(a,n); //Print the elements after Sorting
    return 0;
}

/*OUTPUT:-
Enter the size of the array: 6
Enter the elements of the array: 2
4
1
9
4
6
The Elements of Array before sorting: 2 4 1 9 4 6
The Elements of Array after sorting: 1 2 4 4 6 9     */