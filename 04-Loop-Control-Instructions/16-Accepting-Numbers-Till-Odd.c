#include<stdio.h>
int main(){
    int a;
    printf("Enter An Even Number: ");
    scanf("%d", &a);
    while(1){
        if(a%2!=0){
            printf("Odd Number Entered By User...\nProgram End.");
            break;
        }
        printf("%d\n", a);
        printf("Enter Another One: ");
        scanf("%d", &a);
    }
    return 0;
}