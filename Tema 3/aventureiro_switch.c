#include <stdio.h>

/*int main() {

    int dia = 3;

    if (dia == 1) {
        printf("Domingo\n");

    } else if (dia == 2) {
        printf("Segunda-feira\n");

    } else if (dia == 3) {
        printf("Terça-feira\n");

    } else if (dia == 4) {
        printf("Quarta-feira\n");

    } else if (dia == 5) {
        printf("Quinta-feira\n");

    } else if (dia == 6) {
        printf("Sexta-feira\n");

    } else if (dia == 7) {
        printf("Sábado\n");

    } else {
        printf("Dia inválido\n");
    }

    return 0;
}*/



int main() {

    // Testando o dia com Switch-Case

    int dia;

    printf("Digite o dia: \n");
    scanf("%d",&dia);

    printf("Você escolheu ");
    
    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Dia inválido\n");
    }

    return 0;
}