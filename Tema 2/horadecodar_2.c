#include <stdio.h>

int main() {

    // Variáveis para as notas

    int nota1, nota2, nota3;
    int media;

    printf("**** Programa de Cálculo de Média *****\n");
    printf(" \n");

    // Solicitando as notas

    printf("Digite a sua Primeira Nota: \n");
    scanf("%d",&nota1);

    printf("Digite a sua Segunda Nota: \n");
    scanf("%d",&nota2);
    
    printf("Digite a sua Terceira Nota: \n");
    scanf("%d",&nota3);

    // Calculando a média

    media = (nota1 + nota2 + nota3)/3;

    printf(" \n");
    printf("A sua média é %d", media);



    return 0;  
}