// write a program to get a 4-digit number from user, print whether that number's middle two digits (hunderd's digit and ten's digit)is prime.

#include <stdio.h>
int main (){
    int a, b=0,sec=0,third=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=(a%1000)/10;
    sec=b%10;
    third=b/10;
    if(sec==2 ||sec==3 ||sec==5 ||sec==7 && 
    third==2 ||third==3 ||third==5 ||third==7 ) {
        printf("Prime.");
    }
    else {
        printf("Not prime.");
    }
}