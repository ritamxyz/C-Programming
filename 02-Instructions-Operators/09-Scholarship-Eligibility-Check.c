#include<stdio.h>
int main(){
    float gpa, attendence;
    char backlog;
    printf("Your Last Semester GPA: ");
    scanf("%f", &gpa);
    printf("Your Attendance Percentage: ");
    scanf("%f", &attendence);
    printf("Do You have a backlog?\nAnswer in Y/N: ");
    scanf(" %c", &backlog);
    printf("Here\n'1' represents Eligible\n'0' represents Not Eligible\n");
    int eligibility = (gpa>=6.0 && gpa<=10.0) && (attendence>=75.0 && attendence<=100.0) && (backlog=='n' || backlog=='N');
    printf(" --> %d ", eligibility);
    return 0;
}