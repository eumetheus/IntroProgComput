#include <stdio.h>
#include <stdlib.h>

// Definições do Tabuleiro e Navio

#define tamTabuleiro 10     // Matriz 10 x 10 para o Tabuleiro
#define tamNavio 3          // Vetor de índice 3 para o Navio 
#define tamHabilidade 5     // Matriz 5 x 5 para representar a habilidade

// Número 0 para representar a água e 3 para o navio

#define TAgua 0
#define TNavio 3

// Para melhorar a visualização das habilidade, usarei o número 5 para cone, 6 para cruz e 7 para o octaedro.

#define TCone 5
#define TCruz 6
#define TOctaedro 7

// Funções de apoio para melhorar a manutenção do código
//--------------------------------------------------------

/*

Inicializar tabuleiro com água
--------------------------------

Prepara o tabuleiro no início do jogo.
Todas as posições da matriz recebem o valor TAgua (0),
indicando que o tabuleiro começa completamente vazio.

*/

void inicializarTabuleiro(int tabuleiro[tamTabuleiro][tamTabuleiro]) {

    // Varrendo as linhas e colunas da Matriz e atribuindo o valor TAgua
    
    for (int i = 0; i < tamTabuleiro; i++) {

        for (int j = 0; j < tamTabuleiro; j++) {

            // Cada posição recebe o valor que representa água
            tabuleiro[i][j] = TAgua;
        }
    }
}


/*

Sobrepor habilidades no tabuleiro
-----------------------------------

Aplica a matriz de uma habilidade (cone, cruz ou octaedro) sobre o tabuleiro principal.

Parâmetros:

tabuleiro  -> matriz principal do jogo
habilidade -> matriz da habilidade (composta por 0 e 1)
origemLinha / origemColuna -> ponto central da habilidade
tipoHabilidade -> Númeral que representa ao da Habilidade no tabuleiro

*/

void aplicarHabilidade(int tabuleiro[tamTabuleiro][tamTabuleiro],
                       int habilidade[tamHabilidade][tamHabilidade],
                       int origemLinha, int origemColuna,
                       int tipoHabilidade) {

    // Calcula o centro da matriz de habilidade.
    // Como a matriz é 5x5, o centro será posição 2.

    int centro = tamHabilidade/2;

    for (int i = 0; i < tamHabilidade; i++){

        for (int j = 0; j < tamHabilidade; j++){

            // Calcula a posição equivalente no tabuleiro
            // deslocando a matriz de habilidade para o ponto de origem

            int linhaTab = origemLinha + (i - centro);
            int colunaTab = origemColuna + (j - centro);

            // Verifica se a posição calculada está dentro dos limites do tabuleiro

            if (linhaTab >= 0 && linhaTab < tamTabuleiro && colunaTab >= 0 && colunaTab < tamTabuleiro) {

                // Se a posição da matriz de habilidade for 1
                // significa que aquela posição faz parte da área de efeito
                // Também é verificado se não há um navio naquela posição

                if (habilidade[i][j] == 1 && tabuleiro[linhaTab][colunaTab] == TAgua) {

                    // Marca o tabuleiro com o valor da habilidade

                    tabuleiro[linhaTab][colunaTab] = tipoHabilidade;
                }
            }
        }
    }
}


/*

Habilidade Cone
-----------------

Esta função constrói uma matriz 5x5 que representa a área de efeito de uma habilidade em formato de cone.

O cone cresce linha por linha a partir do centro, aumentando a largura da área afetada.

Parâmetro:

habilidade -> Matriz da habilidade

*/


void criarCone(int habilidade[tamHabilidade][tamHabilidade]) {

    // Centro da matriz (para 5x5 será 2)
    int centro = tamHabilidade / 2;

    for (int i = 0; i < tamHabilidade; i++) {

        for (int j = 0; j < tamHabilidade; j++) {

            // O cone só existe até a linha do centro
            if (i <= centro && j >= centro - i && j <= centro + i) {

                habilidade[i][j] = 1;

            } else {

                habilidade[i][j] = 0;
            }
        }
    }
}

/*

Habilidade Cruz
-----------------

Esta função gera uma matriz em formato de cruz.

A cruz é formada pela linha central e pela coluna central da matriz de habilidade.

Parâmetro:

habilidade -> Matriz da habilidade

*/

void criarCruz(int habilidade[tamHabilidade][tamHabilidade]) {

    // Centro da matriz 5x5

    int centro = tamHabilidade/2;

    for (int i = 0; i < tamHabilidade; i++) {

        for (int j = 0; j < tamHabilidade; j++) {

            // Se estiver na linha central ou na coluna central, a posição pertence à cruz

            if (i == centro || j == centro) {

                habilidade[i][j] = 1;

            } else { 

                habilidade[i][j] = 0;
            }
        }
    }
}


/*

Habilidade Octaedro (losango)
-------------------------------

Esta função cria um formato semelhante à projeção frontal de um octaedro, que visualmente parece um losango.

A forma é calculada utilizando as distâncias a partir do centro

Parâmetro:

habilidade -> Matriz da habilidade

*/


void criarOctaedro(int habilidade[tamHabilidade][tamHabilidade]) {

    // Centro da matriz (ex.: 2 para matriz 5x5)

    int centro = tamHabilidade / 2;

    for (int i = 0; i < tamHabilidade; i++) {

        // Calcula a "largura" do losango na linha atual
        
        int largura;

        // Se estiver acima ou no centro, a largura aumenta

        if (i <= centro) {

            largura = i;

        } else { // Depois do centro, a largura diminui
            
            largura = tamHabilidade - 1 - i;
        }

        for(int j = 0; j < tamHabilidade; j++) {

            // Define o intervalo de colunas que fazem parte do losango

            if (j >= centro - largura && j <= centro + largura) {
                
                habilidade[i][j] = 1;
            }
            else {

                habilidade[i][j] = 0;
            }
        }
    }
}


/*

Exibir o tabuleiro
--------------------

Responsável por imprimir o tabuleiro completo, incluindo as letras das colunas e numeração das linhas.

*/

void imprimirTabuleiro(int tabuleiro[tamTabuleiro][tamTabuleiro]) {

    // Variável para a coluna de letras

    char colTabuleiro[tamTabuleiro] = {'A','B','C','D','E','F','G','H','I','J'};

    printf("\nTabuleiro do Batalha Naval:\n\n");

    printf("   ");

    // Imprimindo as letras das Colunas

    for (int j = 0; j < tamTabuleiro; j++) {
        printf("%c ", colTabuleiro[j]);
    }

    printf("\n\n");

    // Imprimindo o tabuleiro

    for (int i = 0; i < tamTabuleiro; i++) {

        printf(i < 9 ? "%d  " : "%d ", i + 1);

        for (int j = 0; j < tamTabuleiro; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    printf("\n");
}



int main() {

    // 1. Variáveis iniciais
    // -----------------------

    // Tabuleiro
    
    int tabuleiro[tamTabuleiro][tamTabuleiro];

    // Navios
    
    int navioHor[tamNavio] = {3,3,3};
    int navioVer[tamNavio] = {3,3,3};
    int navioDiag1[tamNavio] = {3,3,3};
    int navioDiag2[tamNavio] = {3,3,3};

    // Habilidades
    
    int cone[tamHabilidade][tamHabilidade];
    int cruz[tamHabilidade][tamHabilidade];
    int octaedro[tamHabilidade][tamHabilidade];


    // 2. Coordenadas iniciais
    // -------------------------

    // Navio Horizontal
    
    int linIniHorizontal = 10;
    int colIniHorizontal = 1;

    // Navio Vertical
    
    int linIniVertical = 6;
    int colIniVertical = 1;

    // Navio Diagonal -> Baixo e direita
    
    int linIniDiag1 = 8;
    int colIniDiag1 = 3;

    // Navio Diagonal -> Baixo Esquerda
    
    int linIniDiag2 = 6;
    int colIniDiag2 = 4;

    // Habilidade Cone
    
    int origemConeLinha = 1;
    int origemConeColuna = 1;

    // Habilidade Cruz
    
    int origemCruzLinha = 1;
    int origemCruzColuna = 6;

    // Habilidade Octaedro
    
    int origemOctaedroLinha = 6;
    int origemOctaedroColuna = 6;

    // Ajustando os índices das variáveis

    linIniHorizontal--;
    colIniHorizontal--;

    linIniVertical--;
    colIniVertical--;

    linIniDiag1--;
    colIniDiag1--;

    linIniDiag2--;
    colIniDiag2--;

    origemConeLinha++;
    origemConeColuna++;

    origemCruzLinha++;
    origemCruzColuna++;

    origemOctaedroLinha++;
    origemOctaedroColuna++;


    int i;


    // 3. Inicializar tabuleiro com água
    
    inicializarTabuleiro(tabuleiro);


    // 4. Posicionando os navios
    //--------------------------

    // Horizontal

    for(i = 0; i < tamNavio; i++) {
        tabuleiro[linIniHorizontal][colIniHorizontal+i] = navioHor[i];
    }

    // Vertical

    for(i = 0; i < tamNavio; i++) {
        tabuleiro[linIniVertical+i][colIniVertical] = navioVer[i];
    }

    // Diagonal -> Baixo e Direita

    for(i = 0; i < tamNavio; i++) {
        tabuleiro[linIniDiag1+i][colIniDiag1+i] = navioDiag1[i];
    }

    // Diagonal -> Baixo e esquerda

    for(i = 0; i < tamNavio; i++) {
        tabuleiro[linIniDiag2+i][colIniDiag2-i] = navioDiag2[i];
    }


    // Criando as habilidades

    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);


    /*for (int c = 0; c < 5; c++) {
        for (int d = 0; d < 5; d++) {
            printf("%d ", cone[c][d]);
        }
        printf("\n");
    }

    return 0;*/


    // Aplicar habilidades ao tabuleiro

    aplicarHabilidade(tabuleiro,cone,origemConeLinha,origemConeColuna,TCone);
    aplicarHabilidade(tabuleiro,cruz,origemCruzLinha,origemCruzColuna,TCruz);
    aplicarHabilidade(tabuleiro,octaedro,origemOctaedroLinha,origemOctaedroColuna,TOctaedro);


    // Imprimindo o tabuleiro

    imprimirTabuleiro(tabuleiro);


    return 0;
}