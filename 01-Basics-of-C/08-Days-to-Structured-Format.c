#include<stdio.h>
int main(){
    int inp, years, months, weeks, days, rem;
    printf("Enter the total days: ");
    scanf("%d", &inp);
    years = inp/365;
    rem = inp%365;
    months = rem/30;
    rem = rem%30;
    weeks = rem/7;
    days = rem%7;
    printf("structuring...\n");
    printf("%d Days = %d Years, %d Months, %d Weeks, %d Days", inp, years, months, weeks, days);
    return 0;
}