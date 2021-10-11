/*
reverse number
Author's name-pinto kumar
Data modified-11/10/2021
*/
#include<stdio.h>
int main{
  int num,rev=0,rem;
  printf("enter a number:");
  scanf("%d"&num);
  while(num>=1){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  printf("the reverse of %d is:%d",num,rev);
  return 0;
}
