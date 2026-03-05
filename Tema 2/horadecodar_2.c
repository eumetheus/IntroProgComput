#include <stdio.h>

int main() {

    // Variáveis para as notas. Todas as notas são float

    float nota1, nota2, nota3;
    float media;

    printf("**** Programa de Cálculo de Média *****\n");
    printf(" \n");

    // Solicitando as notas

    printf("Digite a sua Primeira Nota: \n");
    scanf("%f",&nota1);

    printf("Digite a sua Segunda Nota: \n");
    scanf("%f",&nota2);
    
    printf("Digite a sua Terceira Nota: \n");
    scanf("%f",&nota3);

    // Calculando a média

    media = (nota1 + nota2 + nota3)/3;

    printf(" \n");
    printf("Nota 1: %.2f \n",nota1);
    printf("Nota 2: %.2f \n",nota2);
    printf("Nota 3: %.2f \n",nota3);
    printf(" \n");

    printf("A sua média é %.2f", media);



    return 0;  
}