// write a number to get a number from the user and print the sum of all digits.
#include <stdio.h>
int main (){
   int a,sum=0;
   printf("Enter a number: ");
   scanf("%d",&a);
   loop: if (a>0){
    sum+=a%10;
    a/=10;
    goto loop;
   }
   printf("%d",sum);
}