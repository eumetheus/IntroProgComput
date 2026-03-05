#include <stdio.h>

int main() {

    // Produtos

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    // Estoque disponível
    
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    // Valor do produto
    
    float valorA = 10.50;
    float valorB = 20.40;

    // Estoque Mínimo
    
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    // Valor Total

    double valorTotalA;
    double valorTotalB;

    // Informações dos produtos:

    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparação do valor do estoque e do estoque mínimo
    
    int resultadoA, resultadoB;

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d \n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d \n", produtoB, resultadoB);

    // Comparação dos valores totais dos produtos

    printf("O valor total de A (R$ %.2f) é maior do que o valor total de B (R$ %.2f): %d \n", estoqueA * valorA, estoqueB * valorB,  (estoqueA * valorA) > (estoqueB * valorB));


    return 0;
}

