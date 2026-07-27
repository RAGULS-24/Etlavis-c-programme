//Write a program to get a number from user and print the reverse of that number.
#include <stdio.h>
int main (){
    int a,temp=0,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    loop: if (a>0){
        temp=a%10;
        reverse=reverse*10+temp;
        a/=10;
        goto loop;
    }
    printf("%d", reverse);
}