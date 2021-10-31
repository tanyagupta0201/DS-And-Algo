
/*
  Code: Binary Search (JAVA)
  Name: Shreeyanshi Gautam
  Date of Modification: 31/10/2021
 */
/*
  A Duck number is a positive number which has zeroes present in it.
 */
class Duck_Number
{
    void main(int n)
    {
        int dig=0;
        while(n!=0)
        {
          n=n/10;
          dig=n%10;
          for(int i=0;i<n;i++)
          {
            if(dig==0)
           {
              System.out.println("Duck number");
              break;
           }
            else
           {
               System.out.println("NOT a Duck number");
               break;
           }
        }
    }
}
}
