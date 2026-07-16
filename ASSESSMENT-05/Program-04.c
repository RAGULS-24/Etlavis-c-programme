// Write a loop program to print sum of 6 to 1.

#include <stdio.h>
int main (){
    int sum=0,i;
    for(i=1; i<=6; i++) {
        sum+=i;
    }
     printf("%d",sum);
    return 0; 
}