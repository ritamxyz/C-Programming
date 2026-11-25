#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter A Non-negative Number: ");
    scanf("%d", &n);

    if(n<0){
        n=-n;
    }

    if(n==0){
        sum=0;
    }else{
        while(n>0){
            sum += n%10;
            n/=10;
        }
    }

    printf("Sum of Digits: %d", sum);
    return 0;
}