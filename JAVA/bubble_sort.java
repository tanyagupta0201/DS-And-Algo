import java.util.*;
class bubble_sort
{
    public static void bubbleSort(int a[])
    {
        int n=a.length;
        for(int x=0;x<n-1;x++)
        {
            for(int y=0;y<n-x-1;y++)
            {
                if(a[y]>a[y+1])
                {
                    int t=a[y];
                    a[y]=a[y+1];
                    a[y+1]=t;
                }
            }
        }
        System.out.println("The sorted array is-\n");
        for(int x=0;x<n;x++)
        {
            System.out.println(a[x]+" ");  
        }
        
    }
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array\n");
        int n=sc.nextInt();
        int a[]=new int[n];
        for(int x=0;x<n;x++)
        {
            a[x]=sc.nextInt();
        }
        bubbleSort(a);
        
    }
}