// Kadane's Algorithm for maximum subarray sum 
// Complexity:- O(n)

#include<stdio.h>
int main()
{
    int n,a[100],maxSum=0,currSum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        currSum+=a[i];
        if (currSum<0)
        {
            currSum=0;
        }
       // To check if the current sum is greater than the maximum sum
       if (currSum>maxSum)
       {
           maxSum=currSum;
       } 
    }
    printf("Maximum subarray sum is: %d",maxSum);
    return 0;
}


/* OUTPUT:-

Enter the size of the array: 8
Enter the array elements:
-2
-5
 6
-2
-3
 1
 5
-6
Maximum subarray sum is: 7

*/