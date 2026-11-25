#include<stdio.h>
int main(){
    int n, a=0, b=1, s;
    printf("Enter No of Terms: ");
    scanf("%d", &n);
    printf("Printing Fibonacci Sequence for %d Terms...\n", n);
    for(int i=1; i<=n; i++){
        printf(" %d ", a);
        s=a+b;
        a=b;
        b=s;
    }
    return 0;
}