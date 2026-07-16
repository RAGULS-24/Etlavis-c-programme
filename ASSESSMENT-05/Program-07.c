// Write a loop program to print two digit odd number , who's sum of the digit are 7.

#include <stdio.h>
int main (){
    int i;
    for (i=11; i<=99; i++){
        if (i%10 + i/10 == 7 && i%2!=0){
        printf("%d\n",i);
        }
    }
    return 0;
}