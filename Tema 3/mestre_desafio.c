#include <stdio.h>
#include <stdlib.h>

int main() {

    char uf1[2], cod1[3], cid1[20];
    char uf2[2], cod2[3], cid2[20];

    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;

    float dens1, dens2;
    float pibc1, pibc2;

    int pnt1, pnt2;

    int atributo1, atributo2;

    float v1c1=0, v1c2=0;
    float v2c1=0, v2c2=0;

    float soma1, soma2;

    //-------------------------------------------------
    // Cadastro das cartas
    //-------------------------------------------------

    printf("Carta 1\n");

    printf("Estado: (A a H):");
    scanf("%s", uf1);

    printf("Código da Carta (01 a 04):");
    scanf("%s", cod1);

    printf("Cidade: ");
    scanf("%s", cid1);

    printf("Populacao: ");
    scanf("%d", &pop1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    pib1 = pib1 * 1000000000;

    printf("Pontos turisticos: ");
    scanf("%d", &pnt1);

    printf("\nCarta 2\n");

    printf("Estado: (A a H):");
    scanf("%s", uf2);

    printf("Código da Carta (01 a 04):");
    scanf("%s", cod2);

    printf("Cidade: ");
    scanf("%s", cid2);

    printf("Populacao: ");
    scanf("%d", &pop2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    pib2 = pib2 * 1000000000;

    printf("Pontos turisticos: ");
    scanf("%d", &pnt2);

    //-------------------------------------------------
    // Cálculos
    //-------------------------------------------------

    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    pibc1 = pib1 / pop1;
    pibc2 = pib2 / pop2;

    //-------------------------------------------------
    // Escolha do primeiro atributo
    //-------------------------------------------------

    printf("\nEscolha o PRIMEIRO atributo: \n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");

    scanf("%d",&atributo1);

    switch(atributo1){

        case 1:
            v1c1 = pop1;
            v1c2 = pop2;
        break;

        case 2:
            v1c1 = area1;
            v1c2 = area2;
        break;

        case 3:
            v1c1 = pib1;
            v1c2 = pib2;
        break;

        case 4:
            v1c1 = pnt1;
            v1c2 = pnt2;
        break;

        case 5:
            v1c1 = 1/dens1;
            v1c2 = 1/dens2;
        break;

        case 6:
            v1c1 = pibc1;
            v1c2 = pibc2;
        break;

        default:
            printf("Opcao invalida\n");
            return 0;
    }

    //-------------------------------------------------
    // Escolha do segundo atributo
    //-------------------------------------------------

    printf("\nEscolha o SEGUNDO atributo: \n");

    if(atributo1 != 1) printf("1 - Populacao\n");
    if(atributo1 != 2) printf("2 - Area\n");
    if(atributo1 != 3) printf("3 - PIB\n");
    if(atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if(atributo1 != 5) printf("5 - Densidade Demografica\n");
    if(atributo1 != 6) printf("6 - PIB per Capita\n");

    scanf("%d",&atributo2);

    if(atributo2 == atributo1){
        printf("Nao pode escolher o mesmo atributo!\n");
        return 0;
    }

    switch(atributo2){

        case 1:
            v2c1 = pop1;
            v2c2 = pop2;
        break;

        case 2:
            v2c1 = area1;
            v2c2 = area2;
        break;

        case 3:
            v2c1 = pib1;
            v2c2 = pib2;
        break;

        case 4:
            v2c1 = pnt1;
            v2c2 = pnt2;
        break;

        case 5:
            v2c1 = 1/dens1;
            v2c2 = 1/dens2;
        break;

        case 6:
            v2c1 = pibc1;
            v2c2 = pibc2;
        break;

        default:
            printf("Opcao invalida\n");
            return 0;
    }

    //-------------------------------------------------
    // Soma dos atributos
    //-------------------------------------------------

    soma1 = v1c1 + v2c1;
    soma2 = v1c2 + v2c2;

    //-------------------------------------------------
    // Exibição
    //-------------------------------------------------

    printf("\nComparacao entre %s e %s\n\n", cid1, cid2);

    printf("Primeiro atributo:\n");
    printf("%.2f x %.2f\n\n", v1c1, v1c2);

    printf("Segundo atributo:\n");
    printf("%.2f x %.2f\n\n", v2c1, v2c2);

    printf("Soma Carta 1: %.2f\n", soma1);
    printf("Soma Carta 2: %.2f\n\n", soma2);

    //-------------------------------------------------
    // Resultado final
    //-------------------------------------------------

    if(soma1 > soma2)
        printf("Vencedor: Carta 1 (%s)\n", cid1);
    else if(soma2 > soma1)
        printf("Vencedor: Carta 2 (%s)\n", cid2);
    else
        printf("Empate!\n");

    printf("\nObrigado por jogar Super Trunfo!\n");

    return 0;
}