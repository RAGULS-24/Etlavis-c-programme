// wrie a loop program to print the two-digit odd number,who's sum of digits are 7.

#include <stdio.h>
int main (){
    int i;
    for (i=11; i<=99; i++){
        if (i%10+i/10==7 && i%2!=0){
            printf("%d\n",i);
        }
    }
}