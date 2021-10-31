/*
To find wether a given year is leap yearor not.
Author: Shivansh Mishra
Date Modified: 31st October 2021
*/
#include<stdio.h>

#include<math.h>

void main() {
  int year;
  printf("Enter the year: ");
  scanf("%d", & year);
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    printf("it's a leap year");
  } else {
    printf("it's not a leap year");
  }
}