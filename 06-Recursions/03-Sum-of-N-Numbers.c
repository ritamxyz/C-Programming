#include<stdio.h>
int nSum(int n);
int main(){
    int n;
    printf("Value of N: ");
    scanf("%d", &n);
    printf("Sum = %d\n", nSum(n));
    return 0;
}
int nSum(int n){
    if(n==1){
        return 1;
    }
    int sum = nSum(n-1) + n;
    return sum;
}