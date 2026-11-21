#include<stdio.h>
#include<math.h>
int main(){
    int x1, y1, x2, y2;
    float d;
    printf("X1 Coordinate: ");
    scanf("%d", &x1);
    printf("Y1 Coordinate: ");
    scanf("%d", &y1);
    printf("X2 Coordinate: ");
    scanf("%d", &x2);
    printf("Y2 Coordinate: ");
    scanf("%d", &y2);
    d = pow((pow((x2-x1), 2) + pow((y2-y1), 2)), 0.5);
    printf("Distance between The 2 Points = %.2f", d);
    return 0;
}