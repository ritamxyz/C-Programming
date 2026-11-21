#include<stdio.h>
#include<math.h>
int main(){
    float h, p, b;
    printf("Perpendicular Value: ");
    scanf("%f", &p);
    printf("Base Value: ");
    scanf("%f", &b);
    h = pow((pow(p,2) + pow(b,2)), 0.5);
    printf("Answer = %.2f", h);
    return 0;
}