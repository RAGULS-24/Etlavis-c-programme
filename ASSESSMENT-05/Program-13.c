// Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
#include <math.h>
int main ()
{
    int a,temp,digits=0,last=0,first=0,divisor=0,middle,reversed=0;
    printf("enter a number : ");
    scanf("%d",&a);
  temp=a;
    while (temp>0)
    {
         digits++;
         temp/=10;
    }
   divisor=pow(10,digits-1);
   
   first=a/divisor;
   middle=(a%divisor)/10;
   last=a%10;

   reversed=last*divisor+middle*10+first;
   printf("%d",reversed);
}