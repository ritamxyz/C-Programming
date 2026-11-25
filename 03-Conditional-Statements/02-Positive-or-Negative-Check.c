#include<stdio.h>
int main(){
    int inp;
    printf("Enter a Number: ");
    scanf("%d", &inp);
    if(inp==0){
        printf("Input is Zero\n");
    }else if(inp<0){
        printf("Input is a Negative Number\n");
    }else{
        printf("Input is a Positive Number\n");
    }
    printf("Thank You :)");
    return 0;
}