//Get a three-digit number from the user and print the reverse of the number.

#include <stdio.h>
int main (){
    int a,b,c,d,e,reverse;
     printf("Enter a three-digit number: ");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=a/100;
    reverse=(b*100)+(d*10)+e;
    printf("RESULT: %d",reverse);

}