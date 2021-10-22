/*An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.*/

/*Note: Order of elements is not important here.*/

/*Approach:

Two Pointer Approach: The idea is to solve this problem with constant space and linear time is by using a two-pointer or two-variable approach where we simply take two variables like left and right which hold the 0 and N-1 indexes. Just need to check that :

1.Check If the left and right pointer elements are negative then simply increment the left pointer.
2.Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and simultaneously increment and decrement the left and right pointers.
3.Else if the left element is positive and the right element is also positive then simply decrement the right pointer.
4.Repeat the above 3 steps until the left pointer ≤ right pointer.*/

/*Author:Rashmi Singh
Date Modified:22/10/2021*/

//Code
#include <iostream>
using namespace std;

//Function to shift all the negative elements on left side
void Shiftleft(int arr[], int left, int right)
{
  //Loop to iterate over the array from left to right
  while(left<=right)
  {
    //checking if left and right elements are negative
    if(arr[left]<0 && arr[right]<0)
    {
      left+=1;
    }
    //checking if left is positive and right is negative
    else if(arr[left]>0 && arr[right]<0){
      int temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      left+=1;
      right-=1;
    }
    //checking if both are positive
    else if(arr[left]>0 && arr[right]>0){
      right-=1;
    }
    else{
      left+=1;
      right-=1;
    }
  }
}

//function to print an array
void printarray(int arr[], int right)
{
  for(int i=0; i<=right; ++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main(){
  //Number of elements in the given array
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //calling function
  Shiftleft(arr, 0, n-1);
  printarray(arr, n-1);
}
