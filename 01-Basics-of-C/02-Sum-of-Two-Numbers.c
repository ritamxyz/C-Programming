#include<stdio.h>
int main(){
    int a, b;
    printf("Enter A Number: ");
    scanf("%d", &a);
    printf("Enter Another Number: ");
    scanf("%d", &b);
    int sum = a+b;
    printf("Sum of %d and %d = %d", a, b, sum);
    return 0;
}