#include<stdio.h>
void printArray(int *a,int n)
{
   for (int i = 0; i < n; i++)
   {
       printf("%d ",a[i]);
   }
   printf("\n");
}

void InsertionSort(int *a,int n)
{
    int key,j,i;
    // Loop for Passes
    for (i = 1; i <=n-1; i++)
    {   
        key=a[i];
        j=i-1;
        // Loop for each pass
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    
}
int main()
{
    int n,a[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {           
       scanf("%d",&a[i]);
    }
   printf("Array Before Sorting: ");
   printArray(a,n);
   InsertionSort(a,n);
   printf("Array after Sorting: ");
   printArray(a,n);
}


/* OUTPUT:-
Enter the size of array: 7
Enter the elements of the array: 55
99
23
1
0
66
99
Array Before Sorting: 55 99 23 1 0 66 99
Array after Sorting: 0 1 23 55 66 99 99    */