//Write a loop program to print odd number between 1 to 9.

#include <stdio.h>
int main (){
    int i=1;
    loop: if (i<=9) {
        if (i%2!=0){
          printf("%d\n",i);
         }
         i++;
         goto loop;
        }
    }