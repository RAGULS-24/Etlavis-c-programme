// write a loop program to print sum of 1 to 5.

#include <stdio.h>
int main (){
   int i=1,sum=0;
     for(i=1; i<=5; i++){
        sum+=i;
     }
     printf("%d",sum);
}