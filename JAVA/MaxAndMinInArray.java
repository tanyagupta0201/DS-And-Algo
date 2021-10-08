/*
Find Max and Min value in Array
Author: Saurabh Sharma
Date Modified: 7 October 2021
*/

import java.util.Scanner;

public class MaxAndMinInArray {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        String[] input = line.split(" ");
        int[] nums = new int[input.length];
        for (int i = 0; i < input.length; i++)
            nums[i] = Integer.parseInt(input[i]);

        int[] result = maxAndMin(nums);
        System.out.println("Min: " + result[0] + " Max: " + result[1]);
    }

    private static int[] maxAndMin(int[] nums) {
	//assume first element to be max and take max int in min
        int max = nums[0], min = Integer.MAX_VALUE;
        for (int ele : nums) {
            if (ele > max) //if ele > max make it max 
                max = ele;
            if (ele < min) //if ele < min make it min
                min = ele;
        }
        return new int[]{min, max}; //return array
    }
}
