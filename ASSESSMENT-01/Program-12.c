// Get a two-digit number from user and print the reverse of the number.

#include <stdio.h>
int main (){
    int a,b,c,reverse;
     printf("Enter a two-digit number: ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    reverse=b*10+c;
    printf("RESULT: %d",reverse);
}