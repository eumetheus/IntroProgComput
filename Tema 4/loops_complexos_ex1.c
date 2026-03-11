#include <stdio.h>
 
int main() {

    /*
    // Para cada loop, i inncremennta 1 e j decrementa 1. O laço executa enquanto i<j
    
    for (int i = 0, j = 10; i < j; i++, j--) { 

        printf("i = %d, j = %d\n", i, j);
    }
    
    // Para cada loop, i incremennta 1 e j decrementa 1. O laço executa enquanto i<5 e j>5
    
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {

        printf("i = %d, j = %d\n", i, j);
    }

    */

    // Para cada loop, i incremennta 1 se i for par e 2 se for ímpar. Executa enquannto i < 100
    // Imprime os ímpares de 0 a 100
 

    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {

        printf("%d ", i);
    }
    
    return 0;
}