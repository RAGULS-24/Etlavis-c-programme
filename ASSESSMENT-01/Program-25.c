//Get a two-digit number from the user and print the sum of the digits.

#include <stdio.h>
int main (){
    int a ;
    scanf("%d",&a);
    printf("%d",(a%10) + (a/10));
}