#include<stdio.h>
int main(){
    float a, b, c;
    printf("Enter A Number: ");
    scanf("%f", &a);
    printf("Enter Another Number: ");
    scanf("%f", &b);
    printf("Enter Another Number: ");
    scanf("%f", &c);
    float avg = (a+b+c)/3;
    printf("Average = %.2f", avg);
    return 0;
}