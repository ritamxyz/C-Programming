#include<stdio.h>
int main(){
    int n, i=1;
    printf("Enter The Maximum Number: ");
    scanf("%d", &n);
    printf("Printing...\n");
    while(i<=n){
        if(i%3==0){
            i++;
            continue;
        }
        printf(" %d ", i);
        i++;
    }
    return 0;
}