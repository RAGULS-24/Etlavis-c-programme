//Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)
#include <stdio.h>
#include <math.h>
int main (){
    int a,temp=0,digits=0,last=0,divisor=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp=a;
    loop: if (temp>0){
        digits++;
        temp/=10;
        goto loop;
    }
    divisor=pow(10,digits-1);
    last=a/divisor;
    
    if(last%2==0){
        printf("%d",a);
    }
    else {
        a=a-divisor;
        printf("%d",a);
    }
}