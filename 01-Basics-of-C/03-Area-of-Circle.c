#include<stdio.h>
int main(){
    float radius;
    printf("Enter Radius: ");
    scanf("%f", &radius);
    float area = 3.14*radius*radius;
    printf("For radius of %.2f, Area of Circle = %.2f", radius, area);
    return 0;
}