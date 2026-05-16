//Get a three-digit number from user.If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum. Note: The result should always be a single digit only.

#include <stdio.h>
int main (){
    int a,sum,b=0;
    scanf("%d",&a);
    sum=a%10 +(a/10)%10 +a/100;

    while (sum > 10){
      
      while (sum>0)
      {
       b=b+sum%10;
       sum/=10;

      }
      sum=b;
    }
  printf("%d",b);

}