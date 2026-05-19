//Get a two-digit number from the user and check if the digit 1 is greater than or equal to the digit 0. If yes, print 1; otherwise, print 0

#include <stdio.h>
int main (){
    int a;
    printf("Enter a two-digit number: ");
    scanf("%d",&a);
    if ((a%10)<=(a/10)) {
        printf("RESULT : 1");
    }
    else printf("RESULT : 0");
}