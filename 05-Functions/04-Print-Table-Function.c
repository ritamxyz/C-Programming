#include<stdio.h>
void printTable(int);
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    printTable(n);
    return 0;
}
void printTable(int x){
    printf("printing table...\n");
    for(int i = 1; i<=10; i++){
        printf("%d X %d = %d\n", x, i, x*i);
    }
}