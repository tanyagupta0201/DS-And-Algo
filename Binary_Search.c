#include <stdio.h>

void display(int arr[], int n)
{
    //Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int BinarySearch(int arr[], int n, int ele)
{
    //Code for Binary Search
    int low, high, mid;
    low = 0;
    high = n - 1;
    //Keep searching until low<=high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        else if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    //Sorted Array for Binary Search
    int arr[] = {-10, -4, 0, 3, 4, 7, 9, 10, 56, 65, 88, 222, 2224};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("The array elements are: ");
    display(arr, size);
    printf("Enter element to be searched: ");
    scanf("%d", &element);
    BinarySearch(arr, size, element);
    int search = BinarySearch(arr, size, element);
    printf("The Element %d was found at index %d \n", element, search);
    return 0;
}