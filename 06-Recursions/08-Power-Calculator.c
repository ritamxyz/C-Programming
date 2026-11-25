#include<stdio.h>
int getPower(int, int);
int main(){
    int b, p;
    printf("Enter Base: ");
    scanf("%d", &b);
    printf("Enter Power: ");
    scanf("%d", &p);
    if(b<0){
        b=b*(-1);
    }
    if(p<0){
        p=p*(-1);
    }
    printf("Answer = %d", getPower(b,p));
}
int getPower(int b, int p){
    if(p==0){
        return 1;
    }
    return b*getPower(b, p-1);
}