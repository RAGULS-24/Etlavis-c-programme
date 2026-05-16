//Get a two-digit number from the user and check if the digit 1 is greater than or equal to the digit 0. If yes, print 1; otherwise, print 0

#include <stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    if ((a%10)<=(a/10)) {
        printf("1");
    }
    else printf("0");
}