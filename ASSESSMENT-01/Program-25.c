//Get a two-digit number from the user and print the sum of the digits.

#include <stdio.h>
int main (){
    int a ;
    printf("Enter a two-digit number: ");
    scanf("%d",&a);
    printf("RESULT: %d",(a%10) + (a/10));
}