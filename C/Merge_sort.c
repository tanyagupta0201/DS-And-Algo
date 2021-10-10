/*
Merge Sort
Author: Shradha Verma
Date Modified: 10th October 2021
*/

#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int left[n1], right[n2];

	for (i = 0; i < n1; i++)
		left[i] = a[l + i];
	for (j = 0; j < n2; j++)
		right[j] = a[m + 1 + j];

	i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (left[i] <= right[j]) {
			a[k] = left[i];
			i++;
		}
		else {
			a[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		a[k] = left[i];
		i++;
		k++;
	}
	while (j < n2) {
		a[k] = right[j];
		j++;
		k++;
	}
}

void mergeSort(int a[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

void printArr(int a[], int asize)
{
	int i;
	for (i = 0; i < asize; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main()
{
	int a[] = { 18, 10, 4, 9, 2, 5 };
	int asize = sizeof(a) / sizeof(a[0]);

	printf("Given array is \n");
	printArr(a, asize);
	mergeSort(a, 0, asize - 1);
	printf("\nSorted array is \n");
	printArr(a, asize);
	return 0;
}
