// write a program to get number from user, print wheather that number's first two digits (ten's digits and one's digit) is prime.

#include <stdio.h>
int main (){
    int a,i,first=0,sec=0;
    printf("enter a number: ");
    scanf("%d",&a);
    first =a%10;
    sec=a%100/10;
    if (first==2 || first==3 || first==5 || first==7 &&
         sec==2 || sec==3 || sec==5 || sec==7)   {
            printf("prime.");
         }
         else {
          printf(" not prime.");
         }
}