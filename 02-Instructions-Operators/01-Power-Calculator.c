#include<stdio.h>
#include<math.h>
int main(){
    float base, power, ans;
    printf("Enter The Base: ");
    scanf("%f", &base);
    printf("Enter The Power: ");
    scanf("%f", &power);
    ans = pow(base, power);
    printf("Answer = %.2f", ans);
    return 0;
}