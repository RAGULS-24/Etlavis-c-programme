//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.

#include <stdio.h>
int main (){
    int a,b,c,d,e,reverse;

    scanf("%d",&a);
    b=a/1000;
    c=a/100;
    e=c%10;
    d=a%100;
     reverse=(e*1000)+(b*100)+d;
     printf("RESULT: %d",reverse);
 
}