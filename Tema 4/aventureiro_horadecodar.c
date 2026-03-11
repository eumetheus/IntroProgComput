#include <stdio.h>

int main() {

    int i, j;

    char letra;

    for (i = 1; i <= 5; i++) { // Laço externo

        letra = 'A';

        for (j = 1;j <= i; j++) { // Executa i vezes esse laço, de acordo com i

            printf("%c ", letra);
            letra++;
        }

        printf(" \n");
    }

    return 0;
}