#include <stdio.h>

// Definições do Tabuleiro e Navio

#define tamTabuleiro 10
#define tamNavio 3

int main() {

    
    // 1. Variáveis iniciais
    // -----------------------
    
    //int tamTabuleiro = 10;  // Tamanho do tabuleiro
    //int tamNavio = 3;       // Cada navio ocupa 3 posições

    // Matriz do tabuleiro

    int tabuleiro[tamTabuleiro][tamTabuleiro];

    // Letras das colunas

    char colTabuleiro[tamTabuleiro] = {'A','B','C','D','E','F','G','H','I','J'};

    // Vetores que representam os navios
    int navioHor[3]     = {3,3,3};
    int navioVer[3]     = {3,3,3};
    int navioDiag1[3]   = {3,3,3};
    int navioDiag2[3]   = {3,3,3};

    // 2. Coordenadas iniciais
    // -------------------------

    // Navio horizontal

    int linIniHorizontal = 4;
    int colIniHorizontal = 2;

    // Navio vertical

    int linIniVertical = 7;
    int colIniVertical = 6;

    // Navio diagonal principal - Baixo e direita

    int linIniDiag1 = 1;
    int colIniDiag1 = 1;

    // Navio diagonal secundária - Baixo e esquerda

    int linIniDiag2 = 2;
    int colIniDiag2 = 8;

    // Converter coordenadas (1–10) para índices (0–9)

    linIniHorizontal--;
    colIniHorizontal--;

    linIniVertical--;
    colIniVertical--;

    linIniDiag1--;
    colIniDiag1--;

    linIniDiag2--;
    colIniDiag2--;

    // Variáveis de controle dos Loops

    int linha, coluna, i;


    // 3. Inicializando o tabuleiro
    // ------------------------------

    // Preenche todas as posições com 0 (água)

    for (linha = 0; linha < tamTabuleiro; linha++) {

        for (coluna = 0; coluna < tamTabuleiro; coluna++) {

            tabuleiro[linha][coluna] = 0;
        }
    }

    // 4. Posicionando os Navios
    //----------------------------

    // 4.1 Horizontal
    // ----------------

    // A coluna Inicial não pode ser negativa e somada ao tamanho do navio, não pode superar o limite do tabuleiro

    if (colIniHorizontal >= 0 && colIniHorizontal + tamNavio <= tamTabuleiro) {

        int podePosicionar = 1;

        for (i = 0; i < tamNavio; i++) {

            // Checando se todas as coordenadas do navio conflita com outro navio

            if (tabuleiro[linIniHorizontal][colIniHorizontal + i] != 0) {

                podePosicionar = 0;
                break;  // Interrompe se não puder posicionar
            }
        }

        if (podePosicionar) { // Se não há conflitos, posiciona o navio

            for (i = 0; i < tamNavio; i++) {

                tabuleiro[linIniHorizontal][colIniHorizontal + i] = navioHor[i];
            }
        } else {

            printf("Erro: Sobreposição no navio horizontal.\n");
            return 0;
        }
    } else {

        printf("Erro: Navio horizontal fora do tabuleiro.\n");
        return 0;
    }

    
    // 4.2  Vertical
    // ---------------

    // A linha Inicial não pode ser negativa e somada ao tamanho do navio, não pode superar o limite do tabuleiro
    // Além disso, a coluna inicial precisa ser positiva e menor do que o limite do tabuleiro (0 a 9)

    if (linIniVertical >= 0 && linIniVertical + tamNavio <= tamTabuleiro &&
        colIniVertical >= 0 && colIniVertical < tamTabuleiro) {

        int podePosicionar = 1;

        for (i = 0; i < tamNavio; i++) {

            // Checando se todas as coordenadas do navio conflita com outro navio

            if (tabuleiro[linIniVertical + i][colIniVertical] != 0) {

                podePosicionar = 0;
                break; // Se não puder posicionar, interrompe
            }
        }

        if (podePosicionar) {  // Se não há conflitos, posiciona o navio

            for (i = 0; i < tamNavio; i++) {

                tabuleiro[linIniVertical + i][colIniVertical] = navioVer[i];
            }
        } else {
            printf("Erro: Sobreposição no navio vertical.\n");
            return 0;
        }

    } else {
        printf("Erro: Navio vertical fora do tabuleiro.\n");
        return 0;
    }

    
    // 4.3. Diagonal -> Para baixo e para a Direita
    // ----------------------------------------------

    // Checando se o navio está dentro dos limites do tabuleiro

    if (linIniDiag1 >= 0 && colIniDiag1 >= 0 &&
        linIniDiag1 + tamNavio <= tamTabuleiro &&
        colIniDiag1 + tamNavio <= tamTabuleiro) {

        // Checando se todas as coordenadas do navio conflita com outro navio

        int podePosicionar = 1;

        for (i = 0; i < tamNavio; i++) {

            // Checando se conflita com outro navio

            if (tabuleiro[linIniDiag1 + i][colIniDiag1 + i] != 0) {

                podePosicionar = 0;
                break; // Conflitou, sai do laço.
            }
        }

        // Sem conflitos de posição, posiciona o navio vertical

        if (podePosicionar) {  // Linha incrementa 1 e Coluna Incrementa 1 -> Para baixo e paara a direita
            for (i = 0; i < tamNavio; i++) {
                tabuleiro[linIniDiag1 + i][colIniDiag1 + i] = navioDiag1[i];
            }
        } else {
            printf("Erro: Sobreposição no navio diagonal -> Baixo e para a direita.\n");
            return 0;
        }
    } else {
        printf("Erro: Navio diagonal fora do tabuleiro.\n");
        return 0;
    }

    // 4.4. Diagonal -> Para baixo e para a esquerda
    // ------------------------------------------------

    // Checando se o navio está dentro dos limites do tabuleiro

    if (linIniDiag2 >= 0 && colIniDiag2 >= 0 &&
        linIniDiag2 + tamNavio <= tamTabuleiro &&
        colIniDiag2 - (tamNavio - 1) >= 0) {

        // Checando se todas as coordenadas do navio conflita com outro navio

        int podePosicionar = 1;

        for (i = 0; i < tamNavio; i++) {

            if (tabuleiro[linIniDiag2 + i][colIniDiag2 - i] != 0) 
            {
                podePosicionar = 0;
                break; // Interrompe se encontrou conflito com outro navio
            }
        }

        // Sem conflitos de posição, posiciona o navio diagonal

        if (podePosicionar) { // Linha incrementa 1 e Coluna Decrementa 1 -> Para baixo e para a esquerda
            for (i = 0; i < tamNavio; i++) {
                tabuleiro[linIniDiag2 + i][colIniDiag2 - i] = navioDiag2[i];
            }
        }else {
            printf("Erro: Sobreposição no navio diagonal -> Baixo e esquerda.\n");
            return 0;
        }
    } else {
        printf("Erro: Navio diagonal fora do tabuleiro.\n");
        return 0;
    }
    

    // -------------------------------
    // 5. Exibir o tabuleiro
    // -------------------------------

    printf("\nTabuleiro do Batalha Naval:\n\n");

    printf("   ");

    for (coluna = 0; coluna < tamTabuleiro; coluna++) {
        printf("%c ", colTabuleiro[coluna]);
    }

    printf("\n\n");

    for (linha = 0; linha < tamTabuleiro; linha++) {

        printf(linha < 9 ? "%d  " : "%d ", linha + 1);        

        for (coluna = 0; coluna < tamTabuleiro; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}