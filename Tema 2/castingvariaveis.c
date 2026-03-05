#include <stdio.h>
 
int main() {

    // Duas variáveis Inteiras

    int a = 10;
    int b = 3;

    // Quociante é Ponto Flutuante e faz o casting do resultado da divisão de a por b (inteiras)
    
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float. Melhor fazer dessa forma para evitare problemas.
 
    // Imprimindo o resultado

    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}