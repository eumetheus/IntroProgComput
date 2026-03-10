#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numJogador, numComp, result;
    char tipoComp;

    // Gerando o número aleatório de 1 a 100

    srand(time(0));
    numComp = rand() % 100 + 1; // Número entre 1 e 100

    // Iniciando o jogo

    printf("Bem Vindo ao Jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf(" \n");
    printf("Digite M para Maior\n");
    printf("Digite N para Menor\n");
    printf("Digite I para Igual\n");

    printf(" \n");

    printf("Digite a comparação: \n");
    scanf("%c",&tipoComp);

    printf("Digite um número entre 1 e 100: \n");
    scanf("%d", &numJogador);

    // Verificando a comparação escolhida

    switch (tipoComp)
    {
        case 'M':
        case 'm':

            // Maior

            printf("Você escolheu a opção Maior! \n");

            result = (numJogador > numComp) ? 1 : 0;


            break;
        
        case 'N':
        case 'n':

            //Menor

            printf("Você escolheu a opção Menor! \n");

            result = (numJogador < numComp) ? 1 : 0;

            break;

        case 'I':
        case 'i':

            // Igual

            printf("Você escolheu a opção Igual! \n");

            result = (numJogador == numComp) ? 1 : 0;

            break;

        default:
            
            // Comparação inválida

            printf("A comparação escolhida é inválida. Tente novamente!\n");

            break;        
        
    }

    // Imprimindo os números do Jogador e do Computador

    if (tipoComp == 'M' || tipoComp == 'm' || tipoComp == 'N' || tipoComp == 'n' || tipoComp == 'I' || tipoComp == 'i') {
        
        printf("O número do jogador é %d e do Computador é %d \n",numJogador, numComp);
        printf(" \n");
        printf("Resultado:\n");

        if (result == 1) {
            printf("Parabéns, você ganhou!!!\n");
        } else {
            printf("Que pena, você perdeu! Tente novamente!!!\n");
        }

    }

    

    return 0;
}