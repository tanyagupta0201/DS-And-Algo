/*
Perform Searching in a sorted matrix
Author:Saurabh Sharma
Date Modified: 7 October 2021
*/

import java.util.Arrays;
import java.util.Scanner;

public class SearchInMatrix {
    public static void main(String[] args) {

	//INPUT A SORTED MATRIX
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter No. of rows");
        int rows = sc.nextInt();
        sc.nextLine();
        int[][] mat = new int[rows][];
        for (int i = 0; i < rows; i++) {
            String line = sc.nextLine();
            String[] input = line.split(" ");
            int[] temp = new int[input.length];
            for (int j = 0; j < input.length; j++) {
                temp[j] = Integer.parseInt(input[j]);
            }
            mat[i] = temp;
        }
	//INPUT ELEMENT TO SEARCH
        System.out.println("Enter Element to search:");
        int target = sc.nextInt();

        System.out.println(Arrays.toString(searchInMatrix(mat, target)));

    }

    static int[] searchInMatrix(int[][] matrix, int target) {
        int r = 0;
        int c = matrix.length - 1;
        while (r < matrix.length && c >= 0) {
            if (matrix[r][c] == target) {
                return new int[]{r, c};
            }
	//IF TARGET IS MORE THAN LAST ELEMENT OF A ROW
            if (matrix[r][c] < target) {
                r++; //MOVE TO NEXT ROW

            } else {
                c--; //MOVE TO PREV COLUMN
            }
        }
        return new int[]{-1, -1}; //RETURN IF NOT FOUND
    }
}
