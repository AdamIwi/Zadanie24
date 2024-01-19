#include <stdio.h>

int main() {
    float dlugosc, szerokosc, pole;

    printf("Podaj dlugosc boku a: ");
    scanf("%f", &dlugosc);

    printf("Podaj dlugosc boku b: ");
    scanf("%f", &szerokosc);

    pole = dlugosc * szerokosc;

    printf("Pole prostokata o bokach %0.2f i %0.2f wynosi: %0.2f", dlugosc, szerokosc, pole);

    return 0;
}
