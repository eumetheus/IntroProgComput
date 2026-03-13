#include <stdio.h>
 
int main() {

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {27, 9, 12}};
 
    // Substituição condicional de elementos

    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas

        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas

            if (matriz[i][j] % 3 == 0) { // Múltiplos de 3

                matriz[i][j] = -1; // Substitui os multiplos por -1
            }
        }
    }
 
    // Impressão da matriz modificada

    for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha

        for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna

            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
 
    return 0;
}