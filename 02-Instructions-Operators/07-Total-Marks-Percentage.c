#include<stdio.h>
int main(){
    float l1, l2, p, c, m, total, pcm_avg, percentage, remaining_percentage;
    printf("Marks of 1st Language out of 100: ");
    scanf("%f", &l1);
    printf("Marks of English/2nd Language out of 100: ");
    scanf("%f", &l2);
    printf("Marks of Physics out of 100: ");
    scanf("%f", &p);
    printf("Marks of Chemistry out of 100: ");
    scanf("%f", &c);
    printf("Marks of Math out of 100: ");
    scanf("%f", &m);
    total = (p+c+m+l1+l2);
    pcm_avg = (p+c+m)/3;
    percentage = total/5;
    remaining_percentage = 100-percentage;
    printf("______________________________________\n");
    printf("Total Marks Obtained = %.2f\nPCM Average Marks = %.2f\nOverall Percentage = %.2f\nLost Percentage = %.2f\n", total, pcm_avg, percentage, remaining_percentage);
    printf("______________________________________\n");
    return 0;
}