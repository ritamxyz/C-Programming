#include<stdio.h>
void printNumbers(int n);
int main(){
    int n;
    printf("Value of N: ");
    scanf("%d", &n);
    printNumbers(n);
    return 0;
}
void printNumbers(int n){
    if(n==0){
        return;
    }
    printf("%d\n", n);
    printNumbers(n-1);
}