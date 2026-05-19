//Get a two-digit number from the user, make the ten's digit 1, and then print it.
#include <stdio.h>
int main (){
    int a,b,c;
    
    printf("Enter a two-digit number: ");
    scanf("%d",&a);
    b=a%10;
    printf("RESULT: %d",10+b);
}