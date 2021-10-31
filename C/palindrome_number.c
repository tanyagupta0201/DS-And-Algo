/*
To find whether a given number is palindrome or not.
Author: Shivansh Mishra
Date Modified: 31st October 2021
*/
#include<stdio.h>

int main() {
  int num, remain, sum = 0, temp;
  printf("enter the number=");
  scanf("%d", & num);
  temp = num;
  while (num > 0) {
    remain = num % 10;
    sum = (sum * 10) + remain;
    num = num / 10;
  }
  if (temp == sum)
    printf("palindrome number ");
  else
    printf("not a palindrome number");
  return 0;
}