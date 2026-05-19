//Get a number from the user and check if the number is less than or equal to 50. If yes, then print 1; otherwise, print 0

#include <stdio.h>
int main (){
    int a ;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a<=50){
        printf("RESULT: 1");
    }
    else {
         printf("RESULT: 0");
         }
    }