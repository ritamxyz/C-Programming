#include<stdio.h>
int evenSum(int);
int main(){
    int n;
    printf("Total Terms: ");
    scanf("%d", &n);
    printf("Even Sum of %d Terms = %d", n, evenSum(n));
    return 0;
}
int evenSum(int n){
    if(n==0){
        return 0;
    }
    int sum = evenSum(n-1) + 2*n;
    return sum;
}