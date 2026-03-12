#include <stdio.h>

int main() {

    char *nomes[] = {"Alexandre", "Gabriel", "Fernanda"};

    int tamanhoVetor = sizeof(nomes)/sizeof(nomes[0]);

    printf("Tamanho do vetor é: %d \n",tamanhoVetor);
    
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%s \n",nomes[i]);
    }

    return 0;
}
