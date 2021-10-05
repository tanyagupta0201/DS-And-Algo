/*
Convert Decimal to Binary
Author:Saurabh Sharma
Date Modified: 5 October 2021

*/

import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        StringBuilder binary = new StringBuilder();

        while (num > 0) {
            //find remainder and add to string from beginning
            binary.insert(0, num % 2);
            //divide num by 2
            num = num / 2;
        }
        System.out.println(binary);
    }
}
