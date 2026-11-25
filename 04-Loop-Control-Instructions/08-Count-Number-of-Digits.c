#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter A Non-negative Number: ");
    scanf("%d", &n);
    
    if(n<0){
        n = -n;
    }

    if(n==0){
        count=1;
    }else{
        while (n!=0){
            n/=10;
            count++;
        }
    }
    
    printf("No of Digits: %d", count);
    return 0;
}