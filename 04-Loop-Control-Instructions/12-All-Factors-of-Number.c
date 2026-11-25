#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("Printing The Factors...\n");
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
            printf(" %d ", i);
        }
    }

    printf("\nTotal No of Factors: %d", count);
    return 0;
}