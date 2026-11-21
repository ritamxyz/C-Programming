#include<stdio.h>
int main(){
    int inp;
    printf("Enter a 3 digit integer: ");
    scanf("%d", &inp);
    int dig1, dig2, dig3, rem, sum, prod;
    dig1 = inp/100;
    rem = inp%100;
    dig2 = rem/10;
    dig3 = rem%10;
    sum = dig1+dig2+dig3;
    prod = dig1*dig2*dig3;
    printf("Digits are [ %d ] [ %d ] [ %d ]\n", dig1, dig2, dig3);
    printf("Sum of the digits = %d\n", sum);
    printf("Product of the digits = %d\n", prod);
    return 0;
}