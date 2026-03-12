#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {

    int matriz[LINHAS][COLUNAS];

    int soma = 0;

    for (int i = 0; i < LINHAS; i++) {

        for (int j = 0; j < COLUNAS; j++) {

            soma++;

            matriz[i][j] = soma;
            printf(soma < 10 ? "%d  " : "%d ",matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}