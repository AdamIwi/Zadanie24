#include <stdio.h>
#define PI 3.14159

int main() {
    float dlugosc, szerokosc, pole;

    printf("Podaj dlugosc boku a: ");
    scanf("%f", &dlugosc);

    printf("Podaj dlugosc boku b: ");
    scanf("%f", &szerokosc);

    pole = dlugosc * szerokosc;

    printf("Pole prostokata o bokach %0.2f i %0.2f wynosi: %0.2f\n", dlugosc, szerokosc, pole);

    float promien;
    float pole2;

    printf("Podaj promien kola: ");
    scanf("%f", &promien);

    pole2 = PI * promien * promien;

    printf("Pole kola o promieniu %.2f wynosi %.2f\n", promien, pole2);

    return 0;
}
