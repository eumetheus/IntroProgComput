#include <stdio.h>
 
int main() {

    // Variáveis com modificador long

    int numRegular = 2147483647;        // Valor máximo de int
    long int numGrande  = 2147483647;   // Valor máximo de int, mas com o modificador long pode ir até 9,223,372,036,854,775,807
 
    printf("Número regular (int): %d\n", numRegular);
    printf("Número grande (long int): %ld\n", numGrande);
 
    numGrande = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", numGrande);
 
    return 0;
}