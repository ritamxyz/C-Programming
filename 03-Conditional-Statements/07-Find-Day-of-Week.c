#include<stdio.h>
int main(){
    int x;
    printf("Enter The Day Number (eg. '1' = Monday): ");
    scanf("%d", &x);
    switch(x){
        case 1: printf("Monday");
            break;
        case 2: printf("Tuesday");
            break;
        case 3: printf("Wednessday");
            break;
        case 4: printf("Thursday");
            break;
        case 5: printf("Friday");
            break;
        case 6: printf("Saturday");
            break;
        case 7: printf("Sunday");
            break;
        default: printf("Invalid Input");
    }
    return 0;
}