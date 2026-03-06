#include <stdio.h>

int main() {

    // Variáveis

    int a = -5;
    int b = -10;

    // Operador lógico || (Ou)

    if (a > 0 || b > 0) {
        printf("Pelo menos um dos números é positivo\n");
    } else {
        printf("Todos os números são negativos ou nulos\n");
    }


    return 0;
}