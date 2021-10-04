/* 
Find nth term of Fibonacci Series using recursion
Author: Saurabh Sharma
Date Modified: 4 October 2021
*/

import java.util.Scanner;

public class Fibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nth term in Fibonacci Series \n Enter N:");
        int n = sc.nextInt();
        System.out.println(fibo(n));
    }

    //    Nth term in fibonacci series
    static int fibo(int n) {
        if (n < 2)
            return n;
        return fibo(n - 1) + fibo(n - 2);
    }
}
