#include<stdio.h>
int main(){
    int num1, num2, gcd;
    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    for(int i=1; i<=num1 && i<=num2; i++){
        if((num1%i==0)&&(num2%i==0)){
            gcd=i;
        }
    }
    printf("GCD of %d and %d: %d", num1, num2, gcd);
    return 0;
} 