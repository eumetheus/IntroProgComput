#include <stdio.h>
 
int main() {

    // Variáveis de tipos diferentes

    int a = 10;
    float b = 3.5;

    // Somando int com float
    
    float resultado = a + b; // 'a' é convertido implicitamente para float, pois somoui um inteiro com float

    // Imprimindo o Resultado

    printf("Resultado: %.2f\n", resultado);
 
    return 0;
}