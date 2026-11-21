#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("Here\n'1' represents True/Yes\n'0' represents False/No\n");
    printf("%d is the larger value --> %d\n", num1, (num1>num2));
    printf("%d is the larger value --> %d\n", num2, (num2>num1));
    printf("Both values are equal --> %d\n", (num2==num1));
    return 0;
}