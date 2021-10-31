/*
  Code: Armstrong Number (JAVA)
  Name: Shreeyanshi Gautam
  Date of Modification: 31/10/2021
 */
/* An Armstrong number is a positive m-digit number that is equal
  to the sum of the mth powers of their digits.*/
import java.util.Scanner;
public class ArmstrongNumber
 {
   public static void main(String args[]) 
   {
      System.out.println("Enter the number to be verified:");
      Scanner sc = new Scanner(System.in);
      int number = sc.nextInt();
      int check, rem, sum = 0;
      check = number;
      while(check != 0) {
         rem = check % 10;
         sum = sum + (rem * rem * rem);
         check = check / 10;
      }
      if(sum == number)
         System.out.println("An Armstrong number.");
      else
         System.out.println("NOT an Armstrong number.");
   }
}
