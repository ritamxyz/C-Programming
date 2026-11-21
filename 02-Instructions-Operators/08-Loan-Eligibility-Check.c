#include<stdio.h>
int main(){
    int age, income, credit_score;
    printf("Your Age: ");
    scanf("%d", &age);
    printf("Your Monthly Income: ");
    scanf("%d", &income);
    printf("Your Credit Score: ");
    scanf(" %d", &credit_score);
    printf("Here\n'1' represents Eligible\n'0' represents Not Eligible\n");
    int eligibility = (age>=21 && age<=60) && (income>=25000) && (credit_score>=700 && credit_score<=900);
    printf("Your Loan Status --> %d ", eligibility);
    return 0;
}