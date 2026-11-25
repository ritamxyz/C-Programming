#include<stdio.h>
int main(){
    float a, b, c;
    printf("1st Side of Triangle: ");
    scanf("%f", &a);
    printf("2nd Side of Triangle: ");
    scanf("%f", &b);
    printf("3rd Side of Triangle: ");
    scanf("%f", &c);
    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b)){
        printf("Valid Triangle Sides");
    }else{
        printf("Invalid Triangle Sides");
    }
    return 0;
}