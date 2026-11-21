#include<stdio.h>
int main(){
    float cels, farht;
    printf("Enter The Farenheit Value: ");
    scanf("%f", &farht);
    cels = 5.0/9.0*(farht-32);
    printf("Celsius Value = %.2f", cels);
    return 0;
}