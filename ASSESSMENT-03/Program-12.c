//Get a two-digit number from the user and check if the digit 1 is greater than or equal to the digit 0. If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>
int main  () {
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    if (a%10 >= a/10){
        printf("success\n");
    }
    else
     printf("Failure\n");

}