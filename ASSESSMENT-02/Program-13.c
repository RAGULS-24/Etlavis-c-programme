//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print 1; otherwise, print  0.

#include <stdio.h>
int main (){
    int a ;
    printf("Enter a four-digit number: ");
    scanf("%d",&a);

    if ((a%10)==(a/10)%10) {
        printf("RESULT : 1");
    }
    else {
         printf("RESULT : 0");                                                                                                                       
    }

}