//Get a three-digit number from the user and print the sum of the digits.

#include <stdio.h>
int main (){
    int a,b,c,d,ans;
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    d=(a/10)%10;
    ans=b+c+d;
    printf("%d",ans);
}