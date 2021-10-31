/*
  Code: Factorial (JAVA)
  Name: Shreeyanshi Gautam
  Date of Modification: 31/10/2021
 */
import java.util.Scanner;  
class Factorial
{  
 public static void main(String args[])
 { 
   Scanner sc=new Scanner(System.in);  
   System.out.print("Enter the number of elements: ");  
   int num = sc.nextInt();  
   int f=1;    
   for(int i=1;i<=num;i++)
     {    
       f=f*i;    
     }    
  System.out.println("Factorial of "+num+" is: "+f);    
 }  
}  
