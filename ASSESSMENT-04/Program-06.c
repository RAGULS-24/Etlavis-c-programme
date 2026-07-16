// write a loo program to printf the two-digit odd numbers, below 20.

#include <stdio.h>
int main (){
    int i;
    for (i=11; i<20; i++){
       if (i%2!=0){
           printf("%d\n",i);
       }
    }
}