/*
  Code: Palindrome Number (JAVA)
  Name: Shreeyanshi Gautam
  Date of Modification: 31/10/2021
 */
/* A palindrome number is a number that is same after reverse.*/

import java.util.Scanner;
public class Palindrome
{
    void main(int n)
    {
      int r,sum=0,temp;    
      temp=n;    
      while(n>0)
      {    
       r=n%10;  
       sum=(sum*10)+r;    
       n=n/10;    
      }    
      if(temp==sum)    
       System.out.println("Palindrome number ");    
      else    
       System.out.println("NOT a Palindrome number");    
    }  
}  
