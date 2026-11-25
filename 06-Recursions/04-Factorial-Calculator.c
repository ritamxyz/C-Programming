#include<stdio.h>
int getFact(int n);
int main(){
    int n;
    printf("Value of N: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, getFact(n));
    return 0;
}
int getFact(int n){
    if(n==1){
        return 1;
    }
    int fact = getFact(n-1) * n;
    return fact;
}