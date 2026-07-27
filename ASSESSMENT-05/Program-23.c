// Write a program get number from user print the total number of single-digit perfect square numbers in the number.

#include <stdio.h>
int main (){
    int a,count=0 ;
    printf("Enter a number: ");
    scanf("%d",&a);

    while(a>0) {
      int b=a%10;
       if(b==1 || b==4 || b==9 ){
        count ++;
       }
       a/=10;
    }
    printf("%d",count);
}