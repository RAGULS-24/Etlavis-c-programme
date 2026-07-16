// write a program get number from user print whether that number is prime or not.

#include <stdio.h>

int main() {
    int a, i, isprime = 1;

    printf("enter a number: ");
    scanf("%d",&a);

    if (a<2){
        isprime=0;
    }
    else {
        for (i=2; i<=a/2; i++){
            a%i==0;
            isprime=0;
            break;
        }
    }
    if (isprime==1){
        printf("%d is a prime number.",a);
    }
    else {
        printf("%dis not a prime number.",a);
    }
}
