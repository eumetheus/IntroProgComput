#include <stdio.h>

int main() {

    // Definição de variáveis
    
    int idade, matricula; //Inteiros: Idade e matrícula
    float altura; // Float - Altura da pessoa
    char nome[50]; // Char - Nome, máximo de 50 caracteres

    // Lendo a Idade
    
    printf("Digite a sua idade, por favor: \n");
    scanf("%d",&idade);

    // Lendo a altura
    
    printf("Digite a sua altura, por favor: \n");
    scanf("%f",&altura);


    // Lendo o nome
    
    printf("Digite o seu nome, no máximo 50 caracteres: \n");
    scanf("%s", nome);

    // Lendo a matrícula
    
    printf("Digite a sua matrícula, por favor: \n");
    scanf("%d",&matricula);


    // Imprimindo os dados digitados

    printf("A sua idade é: %d \n", idade);
    printf("A sua altura é: %f \n", altura);
    printf("O seu nome é: %s \n", nome);
    printf("A sua matrícula é: %d \n", matricula);

    return 0;

}