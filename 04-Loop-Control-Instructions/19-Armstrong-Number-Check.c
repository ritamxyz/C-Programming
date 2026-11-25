#include<stdio.h>
#include<math.h>
int main(){
    int n, org, copy, arm=0, count=0;
    printf("Enter Number to Check: ");
    scanf("%d", &n);
    org=n;
    copy=n;
    
    if(n==0){
        count++;
    }else{
        while(n!=0){
            count++;
            n/=10;
        }
    }

    while(copy!=0){
        arm = arm + pow((copy%10),count);
        copy/=10;
    }

    if(arm==org){
        printf("Armstrong Number");
    }else{
        printf("Not a Armstrong Number");
    }
    return 0;
}