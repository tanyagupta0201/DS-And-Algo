/*
  Code: Disarium Number (JAVA)
  Name: Shreeyanshi Gautam
  Date of Modification: 31/10/2021
 */
/*Sum of its digits powered with their respective position 
 is equal to the original number.*/

import java.util.Scanner;
public class DisariumNumber
{

    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            System.out.print("Input a number : ");
            int num = sc.nextInt();
            int c= num, d = 0, sum = 0;
            String s = Integer.toString(num);  
            int len = s.length();  
             
            while(c>0)
            {
                d = c % 10;  
                sum = sum + (int)Math.pow(d,len);
                len--;
                c = c/ 10;
            }
             
            if(sum == num)
                System.out.println("Disarium Number.");
            else
                System.out.println("NOT a Disarium Number.");
        }
    }
