// Write a program to get a number from user print the total number of digits in that number.

#include <stdio.h>
int main (){
    int a,i,ans=0;
    printf("enter a number : ");
    scanf("%d",&a);
    for (i=1;a>0; i ++){
        a=a/10;
        ans ++;
    }
    printf("%d",ans);
}