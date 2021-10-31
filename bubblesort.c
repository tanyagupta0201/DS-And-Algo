/*Author : BRINDHA.V
  Date modified : 31.10.2021
*/


#include <stdio.h>
void bubblesort(int arr[], int size)
{
    int i, j;
    for (i = 0;  i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
 
        }
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int array[100], i, size;
    printf("How many numbers you want to sort:  ");
    scanf("%d", &size);
    printf("\nEnter %d numbers : ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    bubblesort(array, size);
    printf("\nSorted array is ");
 
    for (i = 0; i < size; i++)
        printf(" %d ", array[i]);
    return 0;
 
}
/*OUTPUT:

How many numbers you want to sort:  4

Enter 4 numbers : 4
3
2
1

Sorted array is  1  2  3  4 

...Program finished with exit code 0
Press ENTER to exit console.
*/