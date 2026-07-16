//Write a loop program to print sum of 6 to 1.

#include <stdio.h>
int main () {
    int i=1,sum=0;
    for (i=1; i<=6; i++){
        sum+=i;
    }
    printf("%d",sum);
}