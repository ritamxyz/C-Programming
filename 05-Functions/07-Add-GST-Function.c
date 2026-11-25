#include<stdio.h>
float addGST(float);
int main(){
    float val;
    printf("Enter The Value before GST: ");
    scanf("%f", &val);
    printf("Value after adding GST: %.2f\n", addGST(val));
    return 0;
}
float addGST(float x){
    return (x+(x*0.18));
}