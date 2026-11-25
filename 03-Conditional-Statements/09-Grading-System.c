#include<stdio.h>
int main(){
    float total_marks, obt_marks, percentage;
    printf("Exam Conducted Total Marks: ");
    scanf("%f", &total_marks);
    printf("Obtained Total Marks: ");
    scanf("%f", &obt_marks);
    percentage = (obt_marks/total_marks)*100.0;
    if(percentage>=0.0 && percentage<=100.0){
        printf("Dear User! From your score %.2f out of %.2f\n", obt_marks, total_marks);
        printf("Percentage = %.2f\n", percentage);
        if(percentage>=90){
            printf("Remarks: Pass\n");
            printf("Grade: O\n");
        }else if(percentage>=80 && percentage<90){
            printf("Remarks: Pass\n");
            printf("Grade: A+\n");
        }else if(percentage>=75 && percentage<80){
            printf("Remarks: Pass\n");
            printf("Grade: A\n");
        }else if(percentage>=60 && percentage<75){
            printf("Remarks: Pass\n");
            printf("Grade: B+\n");
        }else if(percentage>=50 && percentage<60){
            printf("Remarks: Pass\n");
            printf("Grade: B\n");
        }else if(percentage>=40 && percentage<50){
            printf("Remarks: Pass\n");
            printf("Grade: C\n");
        }else{
            printf("Remarks: Fail\n");
            printf("Grade: F\n");
        }
    }else{
        printf("Something seems wrong. Try again.");
    }
    return 0;
}