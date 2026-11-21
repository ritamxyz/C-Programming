#include<stdio.h>
int main(){
    float cels, farht;
    printf("Enter The Celsius Value: ");
    scanf("%f", &cels);
    farht = cels*(9.0/5.0) + 32;
    printf("Farenheit Value = %.2f", farht);
    return 0;
}