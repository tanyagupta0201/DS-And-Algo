/*
To find wether a given number is an armstrong number or not.
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
    sum = sum + (remain * remain * remain);
    num = num / 10;
  }
  if (temp == sum)
    printf("It's an armstrong  number ");
  else
    printf("It's not an armstrong number");
  return 0;
}