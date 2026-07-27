//Write a loop program to print sum of 6 to 1.

#include <stdio.h>
int main () {
    int i=1,sum=0;
    loop: if (i<=6){
        sum=sum+i;
        i++;
        goto loop;
    }
    printf("%d",sum);
}