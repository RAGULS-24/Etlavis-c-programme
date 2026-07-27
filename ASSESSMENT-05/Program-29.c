//Write a program to get three numbers from user and print the LCM of those numbers.

#include <stdio.h>
int main (){
    int a,b,c,lmc;
    printf("Enter a numbers: ");
    scanf("%d %d %d",&a ,&b, &c);
    lmc=a;
    if (b>lmc){
        lmc=a;
    }
    else if(c>lmc) {
        lmc=b;
    }
    while(1){
        if( lmc%a==0 && lmc%b==0 && lmc%c==0){
            printf("%d",lmc);
            break;
        }
        lmc++;
    }    
}