#include<stdio.h>
void printHello(int n);
int main(){
    int n;
    printf("Value of N: ");
    scanf("%d", &n);
    printHello(n);
    return 0;
}
void printHello(int n){
    if(n==0){
        return;
    }
    printf("Hello User\n");
    printHello(n-1);
}