/*
  Code: Linear Search (JAVA)
  Name: Shreeyanshi Gautam
  Date of Modification: 31/10/2021
 */
import java.util.Scanner;
class LinearSearch
{
   public static void main(String args[])
   {
      int i, n, ele, array[];
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter the number of elements: ");
      n= sc.nextInt(); 
      array = new int[n]; 
      System.out.println("Enter "+ n +" elements: ");
      for (i= 0;i < n;i++) 
      {
        array[i] = sc.nextInt();
      }
      System.out.print("Enter the element to be searched: ");
      ele= sc.nextInt();
      for (i = 0;i < n;i++)
      {
         if (array[i] == ele) 
         {
           System.out.println("Element found at position: "+(i+1));
           break;
         }
      }
      if (i == n)
        System.out.println("Element was not found in the array");
   }
}
