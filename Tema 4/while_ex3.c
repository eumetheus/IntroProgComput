#include <stdio.h>
 
int main() {

    int num = 0; // Contador
   
    //printf("Digite um número (negativo para sair): \n");
    //scanf("%d", &num);
   
    while (num >= 0) {
        
        if (num != 0) {
            printf("Você digitou: %d\n", num);
        }
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}