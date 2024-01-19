#include <stdio.h>

#define PI 3.14159

int main() {
    int choice;
    float length, width, radius, area;

    printf("Wybierz opcjê:\n");
    printf("1. Policz pole prostokata\n");
    printf("2. Policz pole kola\n");

    printf("Wybor: ");
    scanf("%d", &choice);

    if (choice == 1) { // obliczanie pola prostok¹ta
        printf("Podaj dlugosc prostokonta\n");
        scanf("%f", &length);

        printf("Podaj serokosc prostokonta\n");
        scanf("%f", &width);

        area = length * width;
        printf("Pole prostokata: %f", area);
    }
    else if (choice == 2) { // obliczanie pola ko³a
        printf("Podaj promien kola: ");
        scanf("%f", &radius);

        area = PI * radius * radius;
        printf("Pole kola: %f", area);
    }
    else {
        printf("Nieprawidlowy wybor.\n");
    }

    return 0;
}
