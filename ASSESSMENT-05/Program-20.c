// Write a program to print a total numb er single digit prime number.
#include <stdio.h>
int main (){
    int i,a=0;
    for(i=2; i<=9; i++){
        if (i%2!=0){
            a++;
        }
    }
printf("%d",a);
}