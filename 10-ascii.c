#include <stdio.h>

int main(void) {
    char c;

    printf("Um caractere: ");
    c = getchar();

    printf("Codigo ASCII de %c: %d\n", c, c);

    return 0;
}
