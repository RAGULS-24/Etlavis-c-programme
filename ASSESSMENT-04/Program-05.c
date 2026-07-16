//Write a loop program to print odd number between 1 to 9.

#include <stdio.h>
int main (){
    int i,odd;
    for (i=0; i<=9; i++){
        if((i%2)!=0){
        printf("%d\n",i);
        }
    }
}
