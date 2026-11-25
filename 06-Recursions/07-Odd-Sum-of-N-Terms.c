#include<stdio.h>
int oddSum(int);
int main(){
    int n;
    printf("Total Terms: ");
    scanf("%d", &n);
    printf("Odd Sum of %d Terms = %d", n, oddSum(n));
    return 0;
}
int oddSum(int n){
    if(n==0){
        return 0;
    }
    int sum = oddSum(n-1) + (2*n-1);
    return sum;
}