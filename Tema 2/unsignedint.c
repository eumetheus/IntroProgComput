#include <stdio.h>
 
int main() {

    // Variável INT com sinal - O valor excede o limite do INT: -2,147,483,648 a 2,147,483,647

    int signedNumber = 3000000000; 

    // Variável INT sem sinal - Não excede o valor do INT: 0 a 4,294,967,295; Usar o modificador unsigned

    unsigned int unsignedNumber = 3000000000;

    // Imprimindo os valores
 
    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);
 
    return 0;
}