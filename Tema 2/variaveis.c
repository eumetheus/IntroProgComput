#include <stdio.h>
#include <string.h>

int main() {

    // Declarando Variáveis
    //-----------------------

    int idade;          // Idade - Inteiro 
    float altura;       // Altura - Float
    double salario;     // salario - Double
    char opcao;         // opcao - Caractere
    char nome[60];      // nome - String

    idade = 50;
    altura = 1.76;
    salario = 10000.99;
    opcao = 'M';
    strcpy(nome,"Alexandre de Andrade Barbosa Brandão");  // Atribuindo o valor à String

    printf("Meu nome é: %s \n",nome);
    printf("Minha idade é: %d \n",idade);
    printf("Minha altura é: %.2f \n",altura);
    printf("Meu Salário é: %.2lf \n",salario);
    printf("Minha Opção é: %c \n",opcao);

    return 0;    
}