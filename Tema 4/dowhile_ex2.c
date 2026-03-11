#include <stdio.h>
 
int main() {

    int num; // Contador
   
    do { // Executa esse bloco

        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
       
        if (num >= 0) {
            printf("Você digitou: %d\n", num);
        }

    } 
    while (num >= 0);
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}