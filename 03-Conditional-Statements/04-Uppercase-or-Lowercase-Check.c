#include<stdio.h>
int main(){
    char x;
    printf("Enter a Character: ");
    scanf("%c", &x);
    if(x>='a' && x<='z'){
        printf("Lowercase English Character");
    }else if(x>='A' && x<='Z'){
        printf("Uppercase English Character");
    }else{
        printf("Not an English Character");
    }
    return 0;
}