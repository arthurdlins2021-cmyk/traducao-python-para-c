#include <stdio.h>

int main(void) {
    int n;
    int centena, dezena, unidade;

    printf("Numero de 3 digitos: ");
    scanf("%d", &n);

    centena = n / 100;
    dezena = (n / 10) % 10;
    unidade = n % 10;

    printf("Centena: %d\n", centena);
    printf("Dezena: %d\n", dezena);
    printf("Unidade: %d\n", unidade);

    return 0;
}
