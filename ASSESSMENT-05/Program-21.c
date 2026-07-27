// Write a program get number from user print the total number digits which are odd in the number.

#include <stdio.h>
int main (){
 long long a,digits=0,count=0 ;
    printf("Enter a number:");
    scanf("%d",&a);

   while (a>0){
       digits=a%10;
       if(digits%2!=0){
           count++;
       }
       a/=10;
   }
   printf("%d",count);
}