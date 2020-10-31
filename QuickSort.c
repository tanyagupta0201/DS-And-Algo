#include<stdio.h>
void printArray(int *a,int n)
{
   for (int i = 0; i < n; i++)
   {
       printf("%d ",a[i]);
   }
   printf("\n");
}
int partition(int *a,int low,int high)
{
    int pivot=a[low];
    int i = low+1;
    int j = high;
    int temp;
     
    do
    {
       while (a[i]<=pivot)
       {
           i++;
       }
       
       while (a[j]>pivot)
       {
           j--;
       }
       
       if (i < j)
       {
           temp = a[i];
           a[i] = a[j];
           a[j] = temp;
           
       }
       
    } while (i<j);

       // Swap a[low] and a[j]   
       temp = a[low];
       a[low] = a[j];
       a[j] = temp;
       return j;
}

    int QuickSort(int *a, int low, int high)
    {
        int partitionIndex;  // Index of pivot after partition
        if (low < high)
        {
            partitionIndex = partition(a, low, high);
            QuickSort(a, low, partitionIndex - 1);   // sort left subarray
            QuickSort(a, partitionIndex + 1, high);  // sort right subarray
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
    printf("Array before Quick Sort: ");
    printArray(a,n);
    QuickSort(a,0,n-1);
    printf("Array after Quick Sort: ");
    printArray(a,n);
    return 0;
}


/*   OUTPUT
Enter the size of the array: 10
Enter the elements of the array: 2
11
-9
2
44
33
0
8
43
21
Array before Quick Sort: 2 11 -9 2 44 33 0 8 43 21
Array after Quick Sort: -9 0 2 2 8 11 21 33 43 44      */