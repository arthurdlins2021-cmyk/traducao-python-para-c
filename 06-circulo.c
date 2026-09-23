#include <stdio.h>

#define PI 3.14159

int main(void) {
    float raio;
    float area;

    printf("Raio: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area: %.2f\n", area);

    return 0;
}
