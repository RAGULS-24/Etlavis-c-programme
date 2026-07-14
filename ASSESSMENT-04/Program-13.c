// Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b=0,temp=0,last=0,first=0,middle=0,c=0;
    printf("enter a  number: ");
    scanf("%d",&a);
    last = a%10;
    temp=a;
    while (a>0){
        temp/=10;
        c++;
    }
    b=pow(2,c);
    middle=(a%b)/10;
    first=(a/b);
    printf("%d",a);
    printf("%d",b);
    printf("%d",middle);
}  