#include <stdio.h>

int main(void) {
    int total;
    int horas, minutos, segundos;

    printf("Total de segundos: ");
    scanf("%d", &total);

    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;

    printf("%dh %dmin %ds\n", horas, minutos, segundos);

    return 0;
}
