// Write a loop program to print the sum of two-digit odd numbers, whose ten's digit is 7.

#include <stdio.h>
int main (){
    int i=11,sum=0;
   loop: if (i<=99){
    if (i%2!=0 && i/10==7){
      sum=sum+i;
      }
    i++;
    goto loop;
   }   
      printf("%d",sum);
}