#include<stdio.h>
#include<math.h>
void getSI(){
    float p, r, t, si, total;
    printf("Principle Ammount: ");
    scanf("%f", &p);
    printf("Rate of Interest: ");
    scanf("%f", &r);
    printf("Time in Years: ");
    scanf("%f", &t);
    si = (p*r*t)/100.0;
    total = p+si;
    printf("Simple Interest Amnt = %.2f\nTotal Amnt: %.2f\n", si, total);
}
void getCI(){
    float p, r, n, t, ci, total;
    printf("Principle Ammount: ");
    scanf("%f", &p);
    printf("Rate of Interest: ");
    scanf("%f", &r);
    printf("Number of Compounding Periods per Year: ");
    scanf("%f", &n);
    printf("Time in Years: ");
    scanf("%f", &t);
    total = p * pow((1 + ((r / 100.0) / n)), (n * t));
    ci = total - p;
    printf("Compound Interest Amnt = %.2f\nTotal Amnt: %.2f\n", ci, total);
}
int main(){
    char inp;
    printf("Enter 'C' for Compound Interest or 'S' for Simple Interest: ");
    scanf(" %c", &inp);
    if (inp == 'C' || inp == 'c') {
        getCI();
    } else if (inp == 'S' || inp == 's') {
        getSI();
    } else {
        printf("Invalid input! Please enter C or S.\n");
    }
    return 0;
}