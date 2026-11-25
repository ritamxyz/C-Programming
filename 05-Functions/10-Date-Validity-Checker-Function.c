#include<stdio.h>
void checkDate(int, int, int);
int main(){
    int d, m, y;
    printf("Enter Day: ");
    scanf("%d", &d);
    printf("Enter Month: ");
    scanf("%d", &m);
    printf("Enter Year: ");
    scanf("%d", &y);
    checkDate(d, m, y);
    return 0;
}
void checkDate(int d, int m, int y){
    if(y>0){
        if(m>=1 && m<=12){
            switch (m)
            {
            case 1: if(d>0 && d<=31){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 2: if(((y%400==0)||(y%4==0 && y%100!=0))){
                        if(d>0 && d<=29){
                            printf("Valid");
                        }else{
                            printf("Invalid");
                        }
                    }else{
                        if(d>0 && d<=28){
                            printf("Valid");
                        }else{
                            printf("Invalid");
                        }
                    }
                break;
            case 3: if(d>0 && d<=31){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 4: if(d>0 && d<=30){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 5: if(d>0 && d<=31){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 6: if(d>0 && d<=30){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 7: if(d>0 && d<=31){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 8: if(d>0 && d<=31){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 9: if(d>0 && d<=30){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 10: if(d>0 && d<=31){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 11: if(d>0 && d<=30){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            case 12: if(d>0 && d<=31){
                        printf("Valid");
                    }else{
                        printf("Invalid");
                    }
                break;
            default: printf("Invalid");
                break;
            }
        }else{
            printf("Invalid");
        }
    }else{
        printf("Invalid");
    }
}