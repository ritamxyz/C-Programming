#include<stdio.h>
void circle(){
    float r;
    printf("Enter Radius: ");
    scanf("%f", &r);
    printf("Area of circle = %.2f\n", 3.14*r*r);
}
void square(){
    float side;
    printf("Enter Side: ");
    scanf("%f", &side);
    printf("Area of square = %.2f\n", side*side);
}
void rectangle(){
    float l, b;
    printf("Enter Length: ");
    scanf("%f", &l);
    printf("Enter Breadth: ");
    scanf("%f", &b);
    printf("Area of rectangle = %.2f\n", l*b);
}
void triangle(){
    float p, b;
    printf("Enter Perpendicular: ");
    scanf("%f", &p);
    printf("Enter Base: ");
    scanf("%f", &b);
    printf("Area of triangle = %.2f\n", 0.5*p*b);
}
int main(){
    char inp;
    printf("Find area of Circle('C'), Square('S'), Rectangle('R'), Triangle('T')\n");
    printf("Enter Choice: ");
    scanf(" %c", &inp);
    if (inp == 'C' || inp == 'c') {
        circle();
    } else if (inp == 'S' || inp == 's') {
        square();
    } else if (inp == 'R' || inp == 'r') {
        rectangle();
    } else if (inp == 'T' || inp == 't') {
        triangle();
    } else {
        printf("Invalid input! Please enter C, S, R or T.\n");
    }
    return 0;
}