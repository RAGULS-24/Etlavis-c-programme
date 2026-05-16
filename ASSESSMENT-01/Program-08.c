//Get a three-digit number from the user and print the one's digit.

#include <stdio.h>
int main (){
    int a,ans;
    scanf("%d",&a);
    ans=a%10;
    printf("%d",ans);
}