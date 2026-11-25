#include <stdio.h>

void printNamaste();
void printBonjour();
void printHola();
void printHello();

int main() {
    char input;
    printf("Enter 'I' for Indian, 'F' for French, or 'S' for Spanish, 'O' for Others: ");
    scanf(" %c", &input);

    if (input == 'I' || input == 'i') {
        printNamaste();
    } else if (input == 'F' || input == 'f') {
        printBonjour();
    } else if (input == 'S' || input == 's') {
        printHola();
    } else if (input == 'O' || input == 'o') {
        printHello();
    } else {
        printf("Invalid input! Please enter I, F, S or O.\n");
    }

    return 0;
}

void printNamaste() {
    printf("Namaste\n");
}

void printBonjour() {
    printf("Bonjour\n");
}

void printHola() {
    printf("Hola\n");
}

void printHello() {
    printf("Hello\n");
}