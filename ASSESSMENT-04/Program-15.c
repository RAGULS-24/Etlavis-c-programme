//Write a program get number from user print whether that number is prime or not.
#include <stdio.h>
int main (){
    int a,i=2;
    printf("Enter a number: ");
    scanf("%d",&a);
   
    if (a<2){
        printf("Not prime.");
    }
    loop: 
       if (i<a){
          if(a%i==0){
            printf("Not prime.");
            return 0;
          }
        i++;
        goto loop ;
    }
    printf("Prime.");
}