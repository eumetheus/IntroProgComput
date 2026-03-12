#include <stdio.h>

int main() {

    // Tamanho do tabuleiro e dos navios

    int tamTabuleiro = 10;  // 10 linhas e 10 colunas
    int tamNavio = 3;       // Ocupa 3 posições

    // Matriz do tabuleiro

    int tabuleiro[10][10];
    char colTabuleiro[10] = {'A','B','C','D','E','F','G','H','I','J'}; // Letras para as colunas do Tabuleiro

    // Vetores que representam os navios

    int navioHor[3] = {3, 3, 3};
    int navioVer[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios no tabuleiro (1 a 10 e A a J)

    int linIniHorizontal = 4;
    int colIniHorizontal = 2;

    int linIniVertical = 7;
    int colIniVertical = 6;

    // Transformando os valores das coordenadas para os índices corretos dos vetores (Decremento de uma unidade)

    linIniHorizontal--;
    colIniHorizontal--;

    linIniVertical--;
    colIniVertical--;

    
    // Variáveis para os Loops

    int linha, coluna, i;

    
    // 1. Inicializar tabuleiro com 0 (água)
    // --------------------------------------


    for (linha = 0; linha < tamTabuleiro; linha++) {
        for (coluna = 0; coluna < tamTabuleiro; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    
    // 2. Posicionar navio horizontal
    // -------------------------------

    if (colIniHorizontal >= 0 && colIniHorizontal + tamNavio <= tamTabuleiro) { // Está dentro dos limites do tabuleiro

        int posiNavioHor = 1; 

        // Verificar se há sobreposição

        for (i = 0; i < tamNavio; i++) {
            if (tabuleiro[linIniHorizontal][colIniHorizontal+ i] != 0) { // Encontrou uma parte de um navio
                posiNavioHor = 0;
                break;
            }
        }

        // Posicionar o navio

        if (posiNavioHor) { // Alterando a Matriz do Tabuleiro com o valor '3' que representa o navio

            for (i = 0; i < tamNavio; i++) {
                tabuleiro[linIniHorizontal][colIniHorizontal + i] = navioHor[i];
            }

        } else {

            printf("Erro: Sobreposição no navio horizontal.\n");
        }

    } else {

        printf("Erro: Navio horizontal fora do tabuleiro.\n");
    }

    // -------------------------------
    // 3. Posicionar navio vertical
    // -------------------------------

    if (linIniVertical >= 0 && linIniVertical + tamNavio <= tamTabuleiro) { // Está dentro dos limites do tabuleiro

        int posiNavioVer = 1;

        for (i = 0; i < tamNavio; i++) {
            if (tabuleiro[linIniVertical + i][colIniVertical] != 0) { // Encontrou uma parte de um navio
                posiNavioVer = 0;
                break;
            }
        }

        if (posiNavioVer) {  // Alterando a Matriz do Tabuleiro com o valor '3' que representa o navio
            for (i = 0; i < tamNavio; i++) {
                tabuleiro[linIniVertical + i][colIniVertical] = navioVer[i];
            }
        } else {
            printf("Erro: Sobreposição no navio vertical.\n");
        }

    } else {
        printf("Erro: Navio vertical fora do tabuleiro.\n");
    }

    // -------------------------------
    // 4. Exibir o tabuleiro
    // -------------------------------

    // Cabeçalho
    
    printf("\nTabuleiro do Batalha Naval:\n\n");

    // Primeira linha do Tabuleiro

    printf("\n   ");

    for ( int col = 0; col < tamTabuleiro; col++) {
        printf("%c ",colTabuleiro[col]);
    }

    printf("\n \n");

    // Resto do Tabuleiro

    for (linha = 0; linha < tamTabuleiro; linha++) {

        // Número da linha (1 a 10)

        if (linha < 9) {
            printf("%d  ", linha+1);
        } else {
            printf("%d ", linha+1);
        }

        for (coluna = 0; coluna < tamTabuleiro; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}