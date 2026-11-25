#include<stdio.h>
int main(){
    float units, bill;
    printf("Electricity Units Consumed: ");
    scanf("%f", &units);
    if(units>=0 && units<=100){
        bill = units*3;
    }else if(units>100 && units<=200){
        bill = 100*3 + (units-100)*5;
    }else if(units>200 && units<=300){
        bill = 100*3 + 100*5 + (units-200)*7;
    }else if(units>300){
        bill = 100*3 + 100*5 + 100*7 + (units-300)*10;
    }
    printf("Total Electricity Bill = %.2f RS", bill);
    return 0;
}