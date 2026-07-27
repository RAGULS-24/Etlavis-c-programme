// write a loo program to printf the two-digit odd numbers, below 20.

#include <stdio.h>
int main (){
    int i=10;
    loop : if (i<=20){
        if(i%2!=0) {
              printf("%d\n",i);
        }
        i++;
        goto loop ;
    }
}