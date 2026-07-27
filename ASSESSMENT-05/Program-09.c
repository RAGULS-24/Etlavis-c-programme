// write a loop program to print the sum of two-digit numbers whose one's digit is 5.

#include <stdio.h>
int main (){
    int i,sum=0;
    for (i=11; i<=99; i++){
        if(i%10==5){
            sum=sum+i;
        }
    }printf("%d",sum);
}