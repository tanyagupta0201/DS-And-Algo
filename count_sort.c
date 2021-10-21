/*cpp program for count sort
Author: Anil Kumar
Date modified:21-10-2021
*/

#include <stdio.h>
#include <malloc.h>
 //find the max element
int find_Max(int A[], int n)
{
    int max = A[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
 //store count of each element
void Count_Sort(int A[], int n)
{
    int i, j, max;

    max = find_Max(A, n);
    int *Count;

    Count = (int *)malloc(sizeof(int) * (max + 1));

    for (i = 0; i < max + 1; i++)
    {
        Count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        Count[A[i]]++;
    }

    i = 0;
    j = 0;
    while (j < max + 1)
    {
        if (Count[j] > 0)
        {
            A[i++] = j;
            Count[j]--;
        }
        else
            j++;
    }
}
int main()
{
    int n, i;
    n = 10;

    int arr[] = {2, 8, 9, 3, 4, 4, 2, 4, 6, 7};
    printf("before sorting:");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    Count_Sort(arr, n);
    printf("after sorting:");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
