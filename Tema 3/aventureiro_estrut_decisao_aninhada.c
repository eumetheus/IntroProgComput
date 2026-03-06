#include <stdio.h>

int main() {

    // Variáveis 

    int idade, dependentes;
    float renda;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade); // Lendo idade

    printf("Digite a sua renda mensal: \n");
    scanf("%f", &renda); // Lendo renda

    printf("Digite o número de dependentes: \n");
    scanf("%d", &dependentes); // Lendo dependentes

    if (idade >= 18 && idade <= 65) { // Idade entre 18 e 65 (inclusive)

        if (renda < 3000.0) { // Renda menor que 3 mil

            if (dependentes > 2) { // Menos de dependentes
                printf("Você está qualificado para os benefícios sociais\n");
            } else {
                printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
            }
        } else { // Renda maior ou igual a 3 mil
            printf("Você não está qualificado para os benefícios devido à renda\n");
        }

    } else { // Idade fora do intervalo 18 e 65
        printf("Você não está qualificado para os benefícios devido à idade\n");
    }

    return 0;
}
