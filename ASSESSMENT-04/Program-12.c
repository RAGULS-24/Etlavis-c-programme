// Write a program to get a number from user and print the reverse of that number.

#include <stdio.h>
int main (){
    int a,b,reverse=0;
    printf("enter a number: ");
    scanf("%d",&a);
    
    while (a>0) {
        b=a%10;
        reverse = reverse*10 + b;
        a=a/10;
    } 
    printf("%d",reverse);
}