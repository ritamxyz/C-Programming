#include<stdio.h>
int main(){
    int n, rem, reversed_n=0;
    printf("Enter Number: ");
    scanf("%d", &n);

    int org_n=n;

    while(n!=0){
        rem = n%10;
        reversed_n = (reversed_n*10) + rem;
        n = n/10;
    }

    if(org_n==reversed_n){
        printf("Palindrome Number");
    }else{
        printf("Not a Palindrome Number");
    }
    return 0;
}