// Write a loop program to print two digit even number , who's sum of the digit are 6.

#include <stdio.h>
int main (){
    int i;
    for (i=10; i<=99; i++) {
    if(i%10 + i/10 == 6 && i%2 == 0){
        printf("%d\n",i);
           }
       }
    return 0;
}