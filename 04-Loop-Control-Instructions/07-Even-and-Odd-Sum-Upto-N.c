#include<stdio.h>
int main(){
    int n, odd_sum=0, even_sum=0;
    printf("Enter N's Value: ");
    scanf("%d", &n);
    for(int i=1, j=0; i<=n, j<=n; i+=2, j+=2){
        odd_sum+=i;
        even_sum+=j;
    }
    printf("Sum of Odd Numbers Upto Number %d: %d\n", n, odd_sum);
    printf("Sum of Even Numbers Upto Number %d: %d\n", n, even_sum);
    return 0;
}