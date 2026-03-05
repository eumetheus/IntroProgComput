#include <stdio.h>

int main() {

    // duas variáveis de tipos distintos

    int x = 5;      // Int
    float y = 5.0;  // Float
    char c = 'a';   // Chat

    printf("x == y: %d \n", x == y);     // Igualdade. Retorna 1, pois são tipos diferentes, mas os valores são iguais.
    printf("x != y: %d \n", x != y);     // Direfente. Retorna 0, pois os valores são os mesmos.

    printf("x >= c: %d \n", x >= c);
    printf("O Valor ASCII de %c é %d: \n", c, c);

    return 0;
}