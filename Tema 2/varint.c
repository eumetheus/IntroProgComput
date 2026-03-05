#include <stdio.h>
 
int main() {

    // Definindo Variáveis

    int a = 10;
    int b = 3;
    
    // Operações com a e b

    int soma = a + b; // Somando
    int diferenca = a - b; //Diminuindo
    int produto = a * b; // Multiplicação
    int quociente = a / b; // Divisão. Neste caso não é inteira a divisão de 10 por 3
 
    // Imprimindo os resultados
    
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
 
    return 0;
}