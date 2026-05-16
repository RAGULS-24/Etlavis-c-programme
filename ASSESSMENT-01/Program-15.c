//Get a two-digit number from the user, make the one's digit 0, then print it.

#include <stdio.h>
int main (){
    int a,b;
    scanf("%d",&a);
    b=a/10;
    printf("%d",b*10);
}