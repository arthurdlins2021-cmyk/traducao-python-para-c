#include <stdio.h>

int main(void) {
    float base, altura;
    float area, perimetro;

    printf("Base e altura: ");
    scanf("%f %f", &base, &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
