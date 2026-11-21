#include<stdio.h>
int main(){
    int num1, num2, temp;
    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swapping...\n1st Number = %d\n2nd Number = %d", num1, num2);
    return 0;
}