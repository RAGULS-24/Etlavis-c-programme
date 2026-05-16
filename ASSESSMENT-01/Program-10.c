//Get a three-digit number from the user and print the ten's digit.

#include <stdio.h>
int main (){
    int a,b,ans;
    scanf("%d",&a);
    b=a/10;
    ans=b%10;
    printf("%d",ans);
}