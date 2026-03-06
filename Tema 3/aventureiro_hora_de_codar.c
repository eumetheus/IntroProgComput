#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Variáveis

    int escolhaJogador, escolhaComputador;

    // Gerador de números aleatórios

    srand(time(0));
    escolhaComputador = rand() % 3 + 1; // Gera as opções 1, 2 ou 3 aleatoriamente

    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção:\n");

    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");

    printf("Escolha:\n");
    scanf("%d",&escolhaJogador);

    // Imprimindo a escolha do jogador

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Tesoura\n");
        break;    
    }

    // Imprimindo a escolha do Computador

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;    
    }

    printf("Resultado: ");

    // Verificando quem ganhou o se deu empate

    if (escolhaComputador == escolhaJogador) {
        printf("### Jogo Empatou ###\n");

    } else if ((escolhaJogador == 1 && escolhaComputador == 3) || 
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) {

            printf("### Parabéns! Você ganhou!!! ###");

    } else {
        printf("### Que pena... você perdeu! ###\n");

    }

    return 0;
}