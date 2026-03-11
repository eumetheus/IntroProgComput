#include <stdio.h>

int main() {


    /*

    Movimento da Torre
       
    A Torre se movimenntará 5 casas para a direita.

    Vamos usar o FOR, pois o movimento ocorrerá 5 vezes.

    */

    int casasTorre = 5; // número de casas que a torre irá andar
    int i;              // variável de controle do laço

    printf("Movimento da Torre:\n");

    // O laço repete o comando printf 5 vezes, simulando a torre andando casa por casa para a direita

    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // Direção do movimento
    }

    printf("\n");


    /*

    Movimento do Bispo
    
    O Bispo se movimentará 5 casas na diagonal para cima e direita
    
    Vamos usar o WHILE para repetir o movimento. 
    Enquanto o contador for menor ou igual ao número de casas que o bispo deve percorrer.
    */

    int casasBispo = 5; // número de casas do movimento do bispo
    int contadorBispo = 1; // contador para controlar o laço

    printf("Movimento do Bispo:\n");

    // Enquanto o contador for menor ou igual a 5, executa o laço

    while(contadorBispo <= casasBispo) {

        // Representa o movimento diagonal

        printf("Cima Direita\n");

        // incrementa o contador para avançar para a próxima casa

        contadorBispo++;
    }

    printf("\n");


    /*
        
    Movimento da Rainha
    
    A Rainha se movimentará 8 casas para a esquerda com Do... While.

    */
    
    int casasRainha = 8; // número de casas que a rainha irá percorrer
    int contadorRainha = 1; // contador do movimento

    printf("Movimento da Rainha:\n");

    do {

        // imprime a direção do movimento
        printf("Esquerda\n");

        // incrementa o contador
        contadorRainha++;

    } while(contadorRainha <= casasRainha); // Se o contador for menor ou igual ao número de casas, continua


    /*
    
    Movimento do Cavalo: Ele se move em "L".
    
    Nestee programa, farei o cavalo se movimentar 2 casas para baixo e 1 casa para esquerda
    
    Usarei 2 loops aninhados:
    
    - Loop externo (FOR)   → controla o movimento vertical
    - Loop interno (WHILE) → controla o movimento horizontal

    */
    
    int mVer = 2; // duas casas para baixo
    int mHor = 1; // uma casa para esquerda

    int pVer;
    int pHor;

    printf("Movimento do Cavalo:\n");

    // Loop externo (for) para o movimento vertical

    for(pVer = 1; pVer <= mVer; pVer++) { // Movimento vertical inicializa com 1 e será realizaado até o número de passos verticais (2)

        printf("Baixo\n");

        // Após completar as duas casas para baixo, inicia o movimento horizontal.

        if(pVer == mVer) { // pver = mvber = 2

            pHor = 1; // Um passo horizontal

            // Loop interno (while)

            while(pHor <= mHor) { // enquanto passo horizontal for igual a movimento para a esquerda (1)
 
                printf("Esquerda\n");

                pHor++;
            }
        }
    }

    printf("\n");

    return 0;
}