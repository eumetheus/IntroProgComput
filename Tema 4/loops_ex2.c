#include <stdio.h>
 
int main() {

    int i = 1;

    while (i <= 10) { // Externo

        int j = 1;

        while (j <= 10) { // Innterno

            // Imprime as colunas O valor impresso é a linha multiplicada pela coluna
            
            printf("%d\t", i * j);
            j++;
        }

        printf("\n");

        i++;
    }
    
    return 0;
}