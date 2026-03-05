//--------------------------------------------------------------
// Desafio Novato do tema 2 :Criando as Cartas do Super Trunfo
//--------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Declarando variáveis:
    // uf -> estado, cod -> código do estado , cid -> cidade

    char uf1[2], cod1[3], cid1[20];
    char uf2[2], cod2[3], cid2[20];

    // Populacao,Área e PIB de cada cidade

    int   pop1,  pop2;
    float area1, area2;
    float pib1,  pib2;

    // Densidade e PIB Per Capita

    float dens1, dens2;
    float pibc1, pibc2;

    // Número de Pontos turísticos de cada cidade

    int pnt1, pnt2;


    // Variáveis para armazenar a comparação dos atributos das cartas

    int comPop;     // Comparação da População
    int comArea;    // Comparação da Área
    int comPib;     // Comparação do PIB
    int comPnt;     // Comparação dos Pontos Turísticos
    int comDens;    // Comparação da Densidade Demográfica
    int comPibc;    // Comparação do PIB per capita
    int comSuper;   // Comparação do Super Poder 

    // Variáveis para o Super Poder das cartas

    float superPoder1, superPoder2;    

       
    // Lendo os dados da primeira carta:

    printf("Digite a seguir os dados da Carta 1: \n");
    printf("------------------------------------\n\n");

    printf("Estado (A a H): \n");
    scanf("%s",uf1);

    printf("Código da Carta (01 a 04): \n");
    scanf("%s",cod1);

    printf("Cidade (20 caracteres): \n");
    scanf("%s",cid1);

    printf("População: \n");
    scanf("%d",&pop1);

    printf("Área em Km: \n");
    scanf("%f",&area1);

    printf("PIB (Bilhões de Reais): \n");
    scanf("%f",&pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d",&pnt1);


    // Lendo os dados da segunda carta:

    printf(" \n");
    printf("Agora digite os dados da Carta 2: \n");
    printf("---------------------------------\n\n");

    printf("Estado (A a H): \n");
    scanf("%s",uf2);

    printf("Código da Carta (01 a 04): \n");
    scanf("%s",cod2);

    printf("Cidade (20 caracteres): \n");
    scanf("%s",cid2);

    printf("População: \n");
    scanf("%d",&pop2);

    printf("Área em Km: \n");
    scanf("%f",&area2);

    printf("PIB (Bilhões de Reais): \n");
    scanf("%f",&pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d",&pnt2);


    // Calculando a Densidade Populacional e o PIB Per Capita para as duas cartas
    //-----------------------------------------------------------------------------

    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    pibc1 = pib1 / pop1;
    pibc2 = pib2 / pop2;

    // Mostrando os dados das Cartas
    //-------------------------------

    printf(" \n");
    printf("Exibindo os dados das Cartas: \n");
    printf("-----------------------------\n");
    printf(" \n");

    // Carta 1

    printf("Carta 1: \n");
    printf("Estado: %s \n",uf1);
    printf("Código: %s%s \n",uf1,cod1);
    printf("Nome da Cidade: %s \n",cid1);
    printf("População: %d \n",pop1);
    printf("Área: %.2f Km^2\n",area1);
    printf("PIB: %.2f Bilhões de Reais\n",pib1);
    printf("Número de Pontos Turísticos: %d \n",pnt1);
    printf("Densidade Populacional: %.2f hab/Km^2\n",dens1);
    printf("PIB per Capita: %.2f Reais\n",pibc1);

    printf(" \n");

    // Carta 2
    
    printf("Carta 2: \n");
    printf("Estado: %s \n",uf2);
    printf("Código: %s%s \n",uf2,cod2);
    printf("Nome da Cidade: %s \n",cid2);
    printf("População: %d \n",pop2);
    printf("Área: %.2f Km^2\n",area2);
    printf("PIB: %.2f Bilhões de Reais\n",pib2);
    printf("Número de Pontos Turísticos: %d \n",pnt2);
    printf("Densidade Populacional: %.2f hab/Km^2\n",dens2);
    printf("PIB per Capita: %.2f Reais\n",pibc2);


    // Comparando as cartas e calculando superpoder

    comPop = (pop1 > pop2);
    comArea = (int) (area1 > area2);
    comPib = (int) (pib1 > pib2);
    comPnt = (pnt1 > pnt2);
    comDens = (int) ( (1/dens1) > (1/dens2) );
    comPibc = (int) (pibc1 > pibc2);

    // Cálculo do Super Poder de cada carta:
    // Soma dos valores de população, área, PIB, número de pontos turísticos,
    // PIB per capita e o inverso da densidade populacional 

    superPoder1 = (float) pop1 + area1 + pib1 + (float) pnt1 + pibc1 + (1/dens1);
    superPoder2 = (float) pop2 + area2 + pib2 + (float) pnt2 + pibc2 + (1/dens2);

    comSuper = (int) (superPoder1 > superPoder2);

    printf(" \n");
    printf("Comparação de Cartas:\n");
    printf("--------------------- \n");
    printf(" \n");

    printf("População: Carta %d Venceu - (%d) \n",(2-comPop),comPop);
    printf("Área: Carta %d Venceu - (%d) \n",(2-comArea),comArea);
    printf("PIB: Carta %d Venceu - (%d) \n",(2-comPib),comPib);
    printf("Pontos Turísticos: Carta %d Venceu - (%d) \n",(2-comPnt),comPnt);
    printf("Densidade Populacional: Carta %d Venceu - (%d) \n",(2-comDens),comDens);
    printf("PIB per Capita: Carta %d Venceu - (%d) \n",(2-comPibc),comPibc);
    printf("Super Poder: Carta %d Venceu - (%d) \n",(2-comSuper),comSuper);
    
    printf(" \n");
    printf("Obrigado por participar do Super Trunfo!");

    return 0;

}
