#include <stdio.h>

int main() {

    // Impressão dos tamanhos de bytes de cada tipo de variável

    printf("Tamanho de int: %u bytes \n",sizeof(int));
    printf("Tamanho de long int: %u bytes \n",sizeof( long int));
    printf("Tamanho de long long int: %u bytes \n",sizeof(long long int));

    printf("Tamanho de double: %u bytes \n",sizeof(double));
    printf("Tamanho de long double: %u bytes \n",sizeof(long double));
    
    // O modificador long não se aplica ao tipo char.

    return 0;
}
