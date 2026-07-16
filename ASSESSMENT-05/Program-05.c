// Write a loop program to print a odd number between 1 to 9.

#include <stdio.h>
int main (){
    int i;
    for (i=1; i<=9; i++){
        if (i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}