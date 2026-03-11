#include <stdio.h>

/*

Função recursiva parra a Torre

Recebe o número de casas que restam a mexer. 
A cada chamada imprime "Direita" e vai diminuindo o número de casas até chegar a zero.

*/

int moverTorre(int casas) { 

    if (casas == 0) {
        return 0;
    }

    printf("Direita\n");

    moverTorre(casas - 1);
}


/*

Função recursiva para a Rainha

Mesmo princípio da torre.
A rainha irá andar para a esquerda.

*/

int moverRainha(int casas) {

    if (casas == 0) {
        return 0;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}


/*

Bispo com loops aninhados e função recursiva

A recursividade controla quantas casas o bispo irá percorrer.

Dentro da função existem loops aninhados:

 - loop externo representa movimento vertical
 - loop interno representa movimento horizontal

Ao final ele andará na diagonal.

*/

int  moverBispo(int casas) {

    if (casas == 0) {
        return 0;
    }

    int vertical;
    int horizontal;

    for (vertical = 1; vertical <= 1; vertical++) {

        horizontal = 0; 

        while(horizontal < 1) {

            printf("Cima Direita\n");
            horizontal++;
        }
    }

    moverBispo(casas - 1);
}


//----------------
// Função Main
//----------------


int main() {

    // Movimentando a torre
    
    printf("Movimento da Torre:\n");

    int casasTorre = 5;

    moverTorre(casasTorre);

    printf("\n");


    // Movimentando o BISPO
    
    printf("Movimento do Bispo:\n");

    int casasBispo = 5;

    moverBispo(casasBispo);

    printf("\n");

    // Movimentando a Rainha

    printf("Movimento da Rainha:\n");

    int casasRainha = 8;

    moverRainha(casasRainha);

    printf("\n");


    /*
    
    Movimentando o cavalo com loops alinhados

    Movimento em L:

     - 2 casas para CIMA
     - 1 casa para DIREITA
    
    O controle será break e continue.

    */

    printf("Movimento do Cavalo:\n");

    int vertical;
    int horizontal;

    for(vertical = 1; vertical <= 2; vertical++){

        printf("Cima\n");

        // Testa se acabou o movimento vertical

        if (vertical < 2) {
            continue;
        }

        for(horizontal = 1; horizontal <= 2; horizontal++){

            if (horizontal == 1) {

                printf("Direita\n");
                break;
            }
        }
    }

    printf("\n");

    return 0;
}