// To find the maximum subarray sum 
// Complexity: O(n^3)

#include<stdio.h>
int main()
{
    int n,a[100],maxSum=0,currSum=0,left=-1,right=-1;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currSum=0;
            for (int k = i; k<=j; k++)
            {
                currSum+=a[k];
            }
            // Update the maxSum if the currSum is greater than maxSum
            if (currSum>maxSum)
            {
                maxSum=currSum;
                left=i;
                right=j;
            }
        }
    }

    // To print the maximum sum of the subarray
    printf("Maximum subarray sum: %d\n",maxSum);

    // To print the subarray
    printf("The subarray is: {");
    for (int k = left; k <=right ; k++)
    {   
        printf(" %d",a[k]);
    }
    printf(" }");
    return 0;
}



/* OUTPUT:-

Enter the size of the array: 8
Enter the elements of the array:
-2
-5
 6
-2
-3
 1
 5
-6
Maximum subarray sum: 7
The subarray is: { 6 -2 -3 1 5 }

*/