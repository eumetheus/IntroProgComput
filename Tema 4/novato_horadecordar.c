#include <stdio.h>
 
int main() {

    /*int i = 0;

    while (i <= 10) {

        if (i % 2 == 0) {
            printf("O número %d é par! \n",i);
        }

        if (i % 2 != 0) {
            printf("O número %d é ímpar! \n",i);
        }

        i++;

    }*/

    /*int numero;

    do {

        printf("Digite um número par para sair do programa...\n");
        scanf("%d",&numero);

        if (numero % 2 == 0) {
            printf("O número %d é par! \n",numero);
        } else {
            printf("O número %d é ímpar! \n",numero);
        }

    }while (numero %2 !=0);

    printf("Você digfitou um número par, saindo do programa...\n");
    */

    int numero, i;

    printf("Digite um número de 1 a 10 para imprimirmos a tabuada...\n");
    scanf("%d",&numero);

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d \n",i,numero,i*numero);

    }



    return 0;
}