#include<stdio.h>
int main(){
    int x, y;
    char op;
    printf("1st Operand: ");
    scanf("%d", &x);
    printf("2nd Operand: ");
    scanf("%d", &y);
    printf("Operator (+,-,*,/): ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("Sum = %d", x+y);
        break;
    case '-':
        printf("Difference = %d", x-y);
        break;
    case '*':
        printf("Product = %d", x*y);
        break;
    case '/':
        printf("Questiont = %d\nRemainder = %d", x/y, x%y);
        break;
    default:
        printf("\nOops!Something went wrong. Try again.\nNOTE: Only integers as operand and the selected operators only");
        break;
    }
    return 0;
}