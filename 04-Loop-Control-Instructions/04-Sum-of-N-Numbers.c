#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter N's Value: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    printf("Sum of 1st %d Numbers: %d", n,sum);
    return 0;
}