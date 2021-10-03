/*
Program to sort an array using selection sort
Author: Suryansh Maheshwari
Date Modified: 3 October 2021
*/


#include <bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n)
{
    int i, j, minIdx;

    for (i = 0; i < n - 1; i++)
    {
        // find the minimum element in unsorted array
        minIdx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j;

        if (minIdx != i)
            swap(arr[minIdx], arr[i]);
    }
}

/* function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = {64, 25, 19, 4, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}