/*
  Sum of diagonal elements of matrix
  Author-Ritika Rastogi
  Date-31-10-2021
*/

import java.util.*;
class Diagonal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows and columns in matrix");
        int n = sc.nextInt();
        int sum = 0;
        int a[][] = new int[n][n];
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                a[x][y] = sc.nextInt();
            }
        }
        System.out.println("\n The matrix is-");
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                System.out.print(a[x][y] + " ");
                if (x == y)
                    sum = sum + a[x][y];
            }
            System.out.println();
        }
        System.out.println("The sum of diagonals of the matrix is-" + sum);

    }
}
