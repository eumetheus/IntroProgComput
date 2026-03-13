#include <stdio.h>
 
int main() {

    int matriz[3][3] = {
        
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9} };

    int target = 9;
    int found = 0;
 
    // Busca condicional do elemento alvo, no caso 5

    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas

        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas

            if (matriz[i][j] == target) {

                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                
                found = 1;
                break; // Sai do loop interno
            }
        }

        if (found) { // Sai do loop externo
            break;
        }
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}