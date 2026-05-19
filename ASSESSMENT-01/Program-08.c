//Get a three-digit number from the user and print the one's digit.

#include <stdio.h>
int main (){
    int a,ans;
    printf("Enter a three-digit number: ");
    scanf("%d",&a);
    ans=a%10;
    printf("RESULT: %d",ans);
}