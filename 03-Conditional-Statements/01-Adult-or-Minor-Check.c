#include<stdio.h>
int main(){
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if(age>=18){
        printf("Adult\n");
    }else{
        printf("Not Adult\n");
    }
    printf("Thank You :)");
    return 0;
}