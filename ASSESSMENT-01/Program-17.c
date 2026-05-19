//Get a three-digit number from the user, make the one's digit 2, and then print it.

#include <stdio.h>
int main (){
 int a,b;
printf("Enter a three-digit number: ");
 scanf("%d",&a);
 b=a/10;
 printf("RESULT: %d",(b*10)+2);
}