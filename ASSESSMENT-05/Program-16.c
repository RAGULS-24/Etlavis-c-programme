// write a program to get a number from user, print whether that number is prime,and sum of digit is equal to 14.
# include <stdio.h>
int main (){
    int a,b,i,sum=0,isprime;

    printf("Enter a number :");
    scanf("%d",&a);
  
    if (a<2){
         isprime==0;
    }
    else {
       for (i=2; i<a/2; i++){
             a%i==0;
             isprime==0;
             break;
       }
    }
    if (isprime==1){
    printf("%d is a prime number",a);
    }
    else {
        printf("%d is not a prime number",a);
    }
   // sum of digits 
   while (a>0){
     b=a%10;
     sum=sum+b;
     a/=10;
   }
   printf("%d",sum);
}