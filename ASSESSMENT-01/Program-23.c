//Get a three-digit number from the user and make the ten's digit as 0, then print it.

#include <stdio.h>
int main (){
    int a,b,c;
    printf("Enter a three-digit number: ");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    printf("RESULT: %d",c*100 + b);
}