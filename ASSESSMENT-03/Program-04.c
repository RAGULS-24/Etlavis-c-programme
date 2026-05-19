//Get a number from the user and check if the number is greater than 50. If yes, then print "Success"; otherwise, print "Failure"

#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 50) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}