//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.

#include <stdio.h>
int main (){
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=a/100;

    printf("%d",d*100 +b*10+c);
} 