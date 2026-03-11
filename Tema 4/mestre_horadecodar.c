#include <stdio.h>
 
// Função recursiva para imprimir números de n até 1

void recursivo(int numero) {

    if (numero > 0) {

        printf("%d ", numero);       // Imprime o valor atual de n
        recursivo(numero - 1);   // Chama a si mesma com n - 1 -> Recursividade. A cada chamada, n decrementa 1
    }
}
 
int main() {

    int quantidade = 10;

    printf("Contagem regressiva... \n");

    recursivo(quantidade);

    return 0;
}

