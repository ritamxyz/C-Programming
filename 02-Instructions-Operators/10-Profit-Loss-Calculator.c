#include<stdio.h>
int main(){
    float cost, sell, value, percentage;
    printf("Cost Price of the item: ");
    scanf("%f", &cost);
    printf("Selling Price of the item: ");
    scanf("%f", &sell);
    value = (sell-cost);
    percentage = (value/cost)*100;
    (value>=0)?printf("Profit Amnt = %.2f\nProfit Percentage = %.2f", value, percentage):printf("Loss Amnt = %.2f\nLoss Percentage = %.2f", -1*(value), -1*(percentage));
    return 0;
}