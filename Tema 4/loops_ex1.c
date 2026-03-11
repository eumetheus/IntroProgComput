#include <stdio.h>
 
int main() {

    // Conta i de 1 a 10 (Externa)

    for (int i = 1; i <= 10; i++) {  
    
        // Conta j de 1 a 10 (Interna)

        for (int j = 1; j <= 10; j++) { 
            
            // Imprime as colunas O valor impresso é a linha multiplicada pela coluna

            printf("%d\t", i * j); 
        }
    
        printf("\n"); // Muda de elinha

    }

    return 0;
}