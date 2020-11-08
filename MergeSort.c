#include<stdio.h>

void printArray(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
}
void Merge(int *a, int mid, int low, int high)
{
    int i,j,k,b[50];
    i = low;
    j = mid + 1;
    k = low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
        b[k] = a[i];
        i++;
        k++;
        }
    else
    {
        b[k] = a[j];
        j++;
        k++;
    }
    }
    while (i<=mid)
    {
       b[k] = a[i];
       i++;
       k++;
    }
    while (j<=high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }   
}
void MergeSort(int *a, int low, int high)
{
  int mid;
  if (low<high)
  {
      mid = (low + high)/2;
      MergeSort(a, low, mid);
      MergeSort(a, mid+1, high);
      Merge(a, mid, low, high);
  }
  
}
int main()
{
    int n,a[50];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("Array before Merge Sort: ");
    printArray(a,n);
    MergeSort(a, 0, n-1);
    printf("Array after Merge Sort: ");
    printArray(a,n);
    return 0;
}


/* OUTPUT:
Enter the size of array: 6
Enter the array elements: 2
65
31
1
7
4
Array before Merge Sort: 2 65 31 1 7 4
Array after Merge Sort: 1 2 4 7 31 65    
*/