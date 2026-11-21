#include<stdio.h>
int main(){
    int inp, hrs, mins, secs, rem;
    printf("Enter Total Seconds: ");
    scanf("%d", &inp);
    hrs = inp/3600;
    rem = inp%3600;
    mins = rem/60;
    secs = rem%60;
    printf("structuring...\n");
    printf("%d Seconds = %d Hours, %d Minutes, %d Seconds", inp, hrs, mins, secs);
    return 0;
}