#include<stdio.h>
int main(){
    int num1, num2, lcm;
    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    int max = (num1>num2) ? num1 : num2;

    for(int i=max; ; i++){
        if((i%num1==0)&&(i%num2==0)){
            lcm=i;
            break;
        }
    }
    printf("LCM: %d", lcm);
    return 0;
}