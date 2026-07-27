//Write a program to get two numbers from user and print the HCF of those numbers.
#include <stdio.h>
int main (){
    int a,b,lmc=0,hcf=0;
    printf("Enter a numbers: ");
    scanf("%d %d",&a ,&b);
    if (a>b){
        lmc=a;
    }
    else {
        lmc=b;
    }
    while(1){
        if( lmc%a==0 && lmc%b==0){

            break;
        }
        lmc++;
    }
    // To find HCF W.K.T a*b=LMC*HCF then, HCF=a*b/lmc.
   hcf=(a*b)/lmc;
   printf("%d",hcf);
}
/*#include <stdio.h>

int main() {
    int a, b, i = 1, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

loop:
    if (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
        i++;
        goto loop;
    }

    printf("HCF = %d", hcf);

    return 0;
}
*/