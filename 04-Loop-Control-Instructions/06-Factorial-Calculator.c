#include<stdio.h>
int main(){
    int n, fact=1;
    printf("Enter Number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    printf("Factorial of Number %d is: %d", n,fact);
    return 0;
}