// write a loop program to print 1 to 5 one by one.

#include <stdio.h>
int main (){
    int i=5;
    loop: if (i>=1)  {
        printf("%d\n",i);
        i--;
        goto loop;
   }
 }