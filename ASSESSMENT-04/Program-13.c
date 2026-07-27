//Write a program to get a number from user and interchange the first and last digits and print the result.
#include <stdio.h>
#include <math.h>
int main (){
    int a,temp=0,first=0,last=0, digits=0,divisor=0,middle=0,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp=a;
    last=a%10;
    loop: if (temp>0){
        temp/=10;
        digits++;
        goto loop;
    }
    divisor=pow(10,digits-1);
     first=a/(divisor);
     
    middle=a%(divisor)/10;
    reverse=last*(divisor)+middle*10+first;
    printf("%d",reverse);
}