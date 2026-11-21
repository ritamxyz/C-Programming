#include<stdio.h>
int main(){
    float p, r, t, si, total;
    printf("Principle Ammount: ");
    scanf("%f", &p);
    printf("Rate of Interest: ");
    scanf("%f", &r);
    printf("Years: ");
    scanf("%f", &t);
    si = (p*r*t)/100;
    total = p + si;
    printf("calculating...\n");
    printf("Simple Interest Amnt = %.2f\n", si);
    printf("Total Amnt with Interest = %.2f", total);
    return 0;
}