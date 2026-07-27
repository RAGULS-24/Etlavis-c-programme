//write a loop program to print the two-digit even numbers, who's sum of digits are 6.

#include <stdio.h>
int main (){
    int i=10;
     loop: if (i<=99) {
         if(i%10+i/10==6 && i%2==0) {
            printf("%d\n",i);
         }
     i++;
     goto loop;    
    }
  
}