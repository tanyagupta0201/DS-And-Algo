/*
Program to sort an array using merge sort
Author: Suryansh Maheshwari
Date Modified: 4 October 2021
*/


#include<bits/stdc++.h>
using namespace std;


void display(int *array, int size) {
   for (int i = 0; i < size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;

   //size of left and right sub-arrays
   nl = m - l + 1; nr = r - m;

   int larr[nl], rarr[nr];
   //fill left and right sub-arrays

   for (i = 0; i < nl; i++)
      larr[i] = array[l + i];
   for (j = 0; j < nr; j++)
      rarr[j] = array[m + 1 + j];

   i = 0; j = 0; k = l;

   while (i < nl && j < nr) {
      if (larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      } else {
         array[k] = rarr[j];
         j++;
      }
      k++;
   }

   //extra element in left or right array
   while (i < nl || j < nr) {
      if (i < nl)
         array[k++] = larr[i++];
      else if (j < nr)
         array[k++] = rarr[j++];
   }
}
void mergeSort(int *arr, int l, int r) {

   if (l < r) {
      int m = l + (r - l) / 2;

      // Sort first and second arrays
      mergeSort(arr, l, m);
      mergeSort(arr, m + 1, r);
      merge(arr, l, m, r);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);

   mergeSort(arr, 0, n - 1);   //(n-1) for last index

   cout << "Array after Sorting: ";
   display(arr, n);
}