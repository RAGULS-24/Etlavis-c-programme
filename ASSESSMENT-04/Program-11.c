// Write a program to get a number from user and print the sum of digits .

#include <stdio.h>
int main () {
  int a , sum=0;
  printf("enter a number :");
  scanf("%d",&a);
  
  while(a>0){
      sum = sum + a%10;
      a = a/10;
  }
  printf("sum of digits is : %d",sum);
  return 0;
}