#include<stdio.h>
void printArray(int*a,int n)
{
    for (int i = 0; i < n; i++)
    {
            printf("%d ",a[i]);
    }
    printf("\n");   
}
void SelectionSort(int *a,int n)
{    
    int temp,IndexofMin;
    printf("Array After Selection Sort: ");
    for (int i = 0; i < n-1; i++)
    {
      IndexofMin=i;
      for (int j = i+1; j < n; j++)
      {
          if(a[j]<a[IndexofMin])
          {
              IndexofMin=j;
          }
      }
      // Swap a[i] and a[IndexofMin]
      temp=a[i];
      a[i]=a[IndexofMin];
      a[IndexofMin]=temp;
    }    
}
int main()
{
    int a[100],n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before Selection Sort: ");
    printArray(a,n);
    SelectionSort(a,n);
    printArray(a,n);
    return 0;
}


/*  OUTPUT:
Enter the size of the array: 8
Enter the elements of the array: 3
-11
0
99
4
-5
32
11
Array before Selection Sort: 3 -11 0 99 4 -5 32 11
Array After Selection Sort: -11 -5 0 3 4 11 32 99      */