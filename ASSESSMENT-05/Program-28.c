// Write a program to get two numbers from user and print the LCM of those numbers.

#include <stdio.h>
int main (){
    int a,b,lmc=0;
    printf("Enter a numbers: ");
    scanf("%d %d",&a ,&b);
    if (a>b){
        lmc=a;
    }
    else {
        lmc=b;
    }
    while(1){
        if( lmc%a==0 && lmc%b==0){
            printf("%d",lmc);
            break;
        }
        lmc++;
    }
}