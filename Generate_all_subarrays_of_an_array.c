// Code to generate all the possible subarrays of an array

#include<stdio.h>
int main()
{
    int n,a[1000];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    // Generate all subarrays
    printf("\nAll possible subarrays of this array are:-\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // elements of subarray(i,j)
            for (int k = i; k<=j ; k++)
            {
               printf("%d ",a[k]);
            }  
            printf("\n");
        }
    }
return 0;  
}


/*  OUTPUT:-

Enter the size of the array: 4
Enter the elements of the array:
1
2
3
4

All possible subarrays of this array are:-
1
1 2
1 2 3
1 2 3 4
2
2 3
2 3 4
3
3 4
4

*/