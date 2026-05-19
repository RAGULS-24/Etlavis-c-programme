//Get a number from the user and check if the number equals 50. If yes, the print "Success", otherwise print "Failure"

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 50) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }
    
    return 0;
}