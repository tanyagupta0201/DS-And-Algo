/*
  Code: Binary Search (JAVA)
  Name: Shreeyanshi Gautam
  Date of Modification: 31/10/2021
 */
import java.util.Scanner;  
class BinarySearch 
{
    int binarySearch(int arr[], int l, int r, int x)
    {
        if (r >= l) 
        {
            int mid = l + (r - l) / 2;
            if (arr[mid] == x)
                return mid;
            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);
            return binarySearch(arr, mid + 1, r, x);
        }
        return -1;
    }
    public static void main(String args[])
    {
        BinarySearch obj = new BinarySearch();
        Scanner sc=new Scanner(System.in);  
        System.out.print("Enter the number of elements: ");  
        int n=sc.nextInt();  
        int[] arr = new int[10];  
        System.out.println("Enter the elements of the array in a sorted manner: ");  
        for(int i=0; i<n; i++)  
        {   
          arr[i]=sc.nextInt();  
        }  
        System.out.println("Enter the element to be searched: ");
        int x = sc.nextInt();
        int result = obj.binarySearch(arr, 0, n - 1, x);
        if (result == -1)
            System.out.println("Element not present");
        else
            System.out.println("Element found at position: "+ (result+1));
    }
}
