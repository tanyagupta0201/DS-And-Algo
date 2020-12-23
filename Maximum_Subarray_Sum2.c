// To find the maximum subarray sum (Cumulative Sum Method)
// Complexity: O(n^2)

#include<stdio.h>
int main()
{
    int n,a[100],maxSum=0,currSum=0,left=-1,right=-1;
    int Csum[100]={0};  // Array to store the cumulative sum of the array
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the first element of the array: ");
    scanf("%d",&a[0]);
    Csum[0]=a[0];
    printf("Enter the other elements of the array:\n");
    for (int i = 1; i < n; i++)
    {
        scanf("%d",&a[i]);
        Csum[i]=Csum[i-1]+a[i];  // Formula to find the cumulative Sum of the array
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           currSum=0;
           currSum=Csum[j]-Csum[i-1];   
        
           // Update the maxSum if the currSum is greater than maxSum
           if(currSum>maxSum)
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
    for (int i = left; i <=right ; i++)
    {   
        printf(" %d",a[i]);
    }
    printf(" }");
    return 0;
}


/*  OUTPUT:-

Enter the size of the array: 8
Enter the first element of the array: -2
Enter the other elements of the array:
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