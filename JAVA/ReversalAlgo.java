/*
Reversal Algorithm to rotate Array
Author: Saurabh Sharma
Date Modified: 4 October 2021
*/


import java.util.Arrays;
import java.util.Scanner;

public class ReversalAlgo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String line = sc.nextLine();
        String[] input = line.split(" ");
        int[] nums = new int[input.length];
        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }

	//d : rotate array by how many places
        int d = sc.nextInt();

        int[] ans = rotate(nums, d);
        System.out.println(Arrays.toString(ans));
    }
	
    private static int[] rotate(int[] nums, int d) {

        int n = nums.length;
        if (d == 0)
            return null;

	//if d>n
        d = d % n;

        //Reverse the array parts
        reverseArray(nums, 0, d - 1);
        reverseArray(nums, d, n - 1);
        reverseArray(nums, 0, n - 1);

        return nums;
    }
	//reverse array
    private static void reverseArray(int[] nums, int start, int end) {

        int temp;
        while (start < end) {
            temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
}
