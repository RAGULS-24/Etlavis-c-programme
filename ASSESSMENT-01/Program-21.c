//Get a three-digit number from the user and subtract five from that number if one's digit number and 100's digit number are odd, then print the result. Do not use "if".

# include <stdio.h>
int main (){
    int a,b,c,d;
    printf("Enter a three-digit number: ");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    d=a-(5*(b%2)*(c%2));
    printf("RESULT: %d",d);
}