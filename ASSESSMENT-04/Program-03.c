// write a loop program to print sum of 1 to 5.

#include <stdio.h>
int main (){
   int i=1,sum=0;
     loop:if (i<=5) {
      sum=sum+i;
      i++;
      goto loop ;
     }
     printf("%d",sum);
}