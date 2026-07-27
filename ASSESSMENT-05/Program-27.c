// Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.

#include <stdio.h>
int main (){
int a=0,sum,count=0;
for (int i=0; i<100000; i++){
      a=i;
      sum=0;
       while (a>0){
        sum+=a%10;
        a/=10;
       }

       if(sum==14){
        count++;
       }
    }
    printf("%d",count);
}