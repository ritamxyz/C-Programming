#include<stdio.h>
int getGCD(int x, int y){
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
int getLCM(int x, int y){
    if(x==0 || y==0)
        return 0;
    int gcd = getGCD(x, y);
    int lcm = (x/gcd)*y;
    return lcm;
}
int main(){
    int inp,a,b;
    printf("Type 1 for GCD & 2 for LCM: ");
    scanf("%d", &inp);
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    if(a<0){
        a=a*(-1);
    }
    if(b<0){
        b=b*(-1);
    }
    switch(inp){
        case 1:
            printf("GCD = %d", getGCD(a,b));
            break;
        case 2:
            printf("LCM = %d", getLCM(a,b));
            break;
        default:
            printf("Invalid Input/Inputs.");
    }
}