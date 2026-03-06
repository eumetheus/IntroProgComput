#include <stdio.h>

int main() {

    // Variável

    int a = -5;

    // a > 0 retorna Falso, pois a = -5. O operador ! torna a propsição verdadeira NOT FALSE = TRUE, por isso é executada

    if (!(a > 0)) {
        printf("a não é um número positivo\n");
    }

    return 0;
}