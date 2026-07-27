//Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,temp,digits=0,first,divisor,balance=0;
    printf("enter a number: ");
    scanf("%d",&a);
   temp=a;
    while (temp>0){
        temp/=10;
        digits++;
    }
    divisor=pow(10,digits-1);
    first=a/divisor;
    b=first%2;
    balance=a%divisor;
    if (b==0)
    {
      printf("%d",a); 
    }
    else if (b!=0){
        first+=1;
        a=first*divisor+balance;
        printf("%d",a);
    }
}