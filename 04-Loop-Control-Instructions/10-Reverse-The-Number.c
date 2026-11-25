#include<stdio.h>
int main(){
    int n, rem, reversed_n=0;
    printf("Enter Number: ");
    scanf("%d", &n);

    while(n!=0){
        rem = n%10;
        reversed_n = (reversed_n*10) + rem;
        n = n/10;
    }

    printf("Reversed Number: %d", reversed_n);
    return 0;
}