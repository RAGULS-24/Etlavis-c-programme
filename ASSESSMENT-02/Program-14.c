//Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same. If yes, print 1; otherwise, print 0
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    if (a/100==a%100) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}