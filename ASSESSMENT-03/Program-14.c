//Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same. If yes, print "Success"; otherwise, print "Failure".
#include <stdio.h>
int main() {
    int a;
    printf("Enter a four-digit number: ");
    scanf("%d", &a);
    if (a/100==a%100) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}