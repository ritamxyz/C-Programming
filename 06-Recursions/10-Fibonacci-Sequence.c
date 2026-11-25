#include <stdio.h>
int getFibo(int);
int main() {
    int n;
    printf("Enter The No. Terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf(" [ %d ]", getFibo(i));
    }

    return 0;
}

int getFibo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return getFibo(n - 1) + getFibo(n - 2);
}
