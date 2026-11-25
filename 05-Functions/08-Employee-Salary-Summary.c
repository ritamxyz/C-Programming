#include<stdio.h>
void getGS(float);
int main(){
    float bs;
    printf("Enter Your Basic Salary: ");
    scanf("%f", &bs);
    getGS(bs);
    return 0;
}
void getGS(float bs){
    float hra, da, gs;
    hra=bs*0.2;
    da=bs*0.15;
    gs=bs+hra+da;
    printf("Calculating...\nUser entered Basic Salary: %.2f\nHRA = %.2f\nDA = %.2f\nGross Salary = %.2f", bs, hra, da, gs);
}