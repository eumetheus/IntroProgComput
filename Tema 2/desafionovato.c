//--------------------------------------------------------------
// Desafio Novato do tema 2 :Criando as Cartas do Super Trunfo
//--------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Declarando variáveis:
    // uf -> estado, cod -> código do estado , cid -> cidade

    char uf1[1], cod1[2], cid1[20];
    char uf2[1], cod2[2], cid2[20];

    // Populacao,Área e PIB de cada cidade

    int   pop1,  pop2;
    float area1, area2;
    float pib1,  pib2;

    // Número de Pontos turísticos de cada cidade

    int pnt1, pnt2;

    
    // Lendo os dados da primeira carta:

    printf("Digite a seguir os dados da Carta 1: \n");
    printf("------------------------------------\n\n");

    printf("Estado (A a H): \n");
    scanf("%s",uf1);

    printf("Código da Carta: (01 a 04) \n");
    scanf("%s",cod1);

    printf("Cidade (20 caracteres) \n");
    scanf("%s",cid1);

    printf("População: \n");
    scanf("%d",&pop1);

    printf("Área em Km: \n");
    scanf("%f",&area1);

    printf("PIB: \n");
    scanf("%f",&pib1);

    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d",&pnt1);


    // Lendo os dados da segunda  carta:

    printf("Digite a seguir os dados da Carta 1: \n");
    printf("------------------------------------\n\n");

    printf("Estado (A a H): \n");
    scanf("%s",uf1);

    printf("Código da Carta: (01 a 04) \n");
    scanf("%s",cod1);

    printf("Cidade (20 caracteres) \n");
    scanf("%s",cid1);

    printf("População: \n");
    scanf("%d",&pop1);

    printf("Área em Km: \n");
    scanf("%f",&area1);

    printf("PIB: \n");
    scanf("%f",&pib1);

    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d",&pnt1);


    return 0;


}
