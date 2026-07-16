//write a loop program to print the two-digit even numbers, who's sum of digits are 6.

#include <stdio.h>
int main (){
    int i;
    for (i=11; i<=99; i++){
        if (i%10+i/10==6 && i%2==2){
            printf("%d\n",i);
        }
    }
}