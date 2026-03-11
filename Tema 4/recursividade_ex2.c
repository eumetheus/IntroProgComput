#include <stdio.h>
 
// Função recursiva para imprimir números de n até 1

void recursiveLoop(int n) {

    if (n > 0) {

        printf("%d ", n);       // Imprime o valor atual de n
        recursiveLoop(n - 1);   // Chama a si mesma com n - 1 -> Recursividade. A cada chamada, n decrementa 1
    }
}
 
int main() {

    int numero = 10;

    printf("Contagem regressiva: ");

    recursiveLoop(numero);

    return 0;
}

