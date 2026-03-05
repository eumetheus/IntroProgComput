#include <stdio.h>

// Função Principal

int main() {

    // Declarando variáveis

    int a = 20;
    int b = 10;
 
    // Operadores aritméticos
    // Soma -> +
    // Subtração -> -
    // Multiplicação -> *
    // Divisão -> /

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;

    // Guardando o valor original de A e B

    int aOri = a;
    int bOri = b;

    // Operadores de atribuição de valores

    a += 2; // a valerá 20 + 2 = 22
    b *= 3; // b valerá 10 * 3 = 30
 
    // Operadores de incremento e decremento

    a++; // a valerá 22 + 1 = 23
    b--; // b valerá 30 - 1 = 29
 
    // Exibindo os resultados das transformações das variáveis
    //-----------------------------------------------------------

    printf("Valor original de A: %d\n",aOri);
    printf("Valor original de B: %d\n",bOri);
    printf(" \n");

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    
    printf(" \n");
    printf("Novo valor de a (após += 2 e ++): %d\n", a);
    printf("Novo valor de b (após *= 3 e --): %d\n", b);
 
    return 0;

}