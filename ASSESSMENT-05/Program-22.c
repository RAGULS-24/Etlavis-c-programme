//Write a program get number from user print the total number of two-digit odd numbers in the number.
#include <stdio.h>
int main (){
    int a,b=0,last=0,laast=0,count=0;
    printf("Enter a number : ");
    scanf("%d",&a);

    while(a>=10){
       last=a%10;
       laast=(a/10)%10;
          b= laast*10+last;
          if(b%2!=0){
            count++;
        }    
        a/=10;
    }
    printf("%d",count);
}