#include<stdio.h>
int digitSum(int n);
int main(){
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    if(n<0){
        n=n*(-1);
    }
    printf("Sum of The Digits = %d", digitSum(n));
    return 0;
}
int digitSum(int n){
    if(n==0){
        return 0;
    }
    return n%10 + digitSum(n/10);
}