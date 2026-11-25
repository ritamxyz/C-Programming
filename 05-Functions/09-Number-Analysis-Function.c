#include<stdio.h>
void analyseNum(int, int, int, int, int, int, int);
int main(){
    int n, copy, digits=0, sum=0, prod=1, rev=0, count=0;
    printf("Enter a +ve Integer: ");
    scanf("%d", &n);
    copy=n;
    analyseNum(n, copy, digits, sum, prod, rev, count);
    return 0;
}
void analyseNum(int n, int copy, int digits, int sum, int prod, int rev, int count){
    if(n>0){
        while(n!=0){
            sum+=(n%10);
            prod*=(n%10);
            rev=(rev*10)+(n%10);
            n/=10;
            digits++;
        }
        printf("Analysing the number %d....\n", copy);
        printf("Total no of digits: %d\n", digits);
        printf("Sum of the digits: %d\n", sum);
        printf("Product of the digits: %d\n", prod);
        printf("Reverse of the number: %d\n", rev);
        if(copy==rev){
            printf("%d is a Palindrome Number\n", copy);
        }
        if(copy>1){
            printf("Factors of the number are:");
            for(int i=1; i<=copy; i++){
                if(copy%i==0){
                    printf(" [ %d ] ", i);
                    count++;
                }
            }
            if(count==2){
                printf("\n%d is a Prime Number\n", copy);
            }else{
                printf("\n%d is a Composite Number\n", copy);
            }
        }else if(copy==1){
            printf("1 is neither prime nor composite\n");
        }
    }else if(n==0){
        printf("Entered Zero");
    }else{
        printf("-ve number detected\ncode ending...");
    }
}