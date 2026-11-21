#include<stdio.h>
int main(){
    char inp;
    printf("Enter A Character: ");
    scanf("%c", &inp);
    printf("ASCII Value = %d\nNext Character = %c", inp, (inp+1));
    return 0;
}