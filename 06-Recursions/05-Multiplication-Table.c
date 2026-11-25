#include<stdio.h>
void getTable(int, int);
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    getTable(n, 1);
    return 0;
}
void getTable(int n, int count){
    if(count>10){
        return;
    }
    printf("%d X %d = %d\n", n, count, n*count);
    getTable(n, count+1);
}