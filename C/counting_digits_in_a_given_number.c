/*
To find number of digits in a given number.
Author: Shivansh Mishra
Date Modified: 31st October 2021
*/
#include<stdio.h>

#include<math.h>

void main() {
  int n, i, c = 0;
  printf("Enter the number: ");
  scanf("%d", & n);
  while (n != 0) {
    n = n / 10;
    c++;
  }
  printf("the no. of digits in the given number is: %d", c);
}