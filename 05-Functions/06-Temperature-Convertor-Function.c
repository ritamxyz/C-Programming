#include <stdio.h>

float toCelsius();
float toFahrenheit();

int main() {
    char choice;
    
    printf("Type 'C' to convert TO Celsius, or 'F' to convert TO Fahrenheit: ");
    scanf(" %c", &choice);
    
    if (choice == 'C' || choice == 'c') {
        printf("Celsius Value = %.2f\n", toCelsius());
    } else if (choice == 'F' || choice == 'f') {
        printf("Fahrenheit Value = %.2f\n", toFahrenheit());
    } else {
        printf("Invalid choice! Please enter 'C' or 'F'.\n");
    }
    
    return 0;
}

float toCelsius() {
    float f;
    printf("Enter the Fahrenheit Value: ");
    scanf("%f", &f);
    return (f - 32.0) * (5.0 / 9.0);
}

float toFahrenheit() {
    float c;
    printf("Enter the Celsius Value: ");
    scanf("%f", &c);
    return (c * (9.0 / 5.0)) + 32.0;
}
