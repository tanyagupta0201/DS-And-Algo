#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int maximum(int *a, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

void CountSort(int *a, int n)
{
    int i,j;
    // Find the maximum element in the array
    int max = maximum(a,n);

    // Create the count array dynamically
    int* count = (int*) malloc((max+1)*sizeof(int));

    // Initialize the array with 0
    for (i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    
    // Increment the corresponding index in the count array
    for  (i = 0; i < n; i++)
    {
        count[a[i]] =  count[a[i]] + 1;
    }

    i = 0; // counter for count array
    j = 0; // counter for given array

    while (i<=max)
    {
        if(count[i]>0)
        {
            a[j] = i;
            count[i] =  count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }   
    } 
   
}
int main()
{
    int n,a[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
         scanf("%d",&a[i]);
    }
    printf("Array before Count Sort: ");
    printArray(a,n);
    CountSort(a,n);
    printf("Array after Count Sort: ");
    printArray(a,n);
    return 0;
}


/*   OUTPUT:

Enter the size of the array: 8
Enter the elements of the array: 2
4
2
9
4
11
6
17
Array before Count Sort: 2 4 2 9 4 11 6 17
Array after Count Sort: 2 2 4 4 6 9 11 17

*/