#include <stdio.h>

int main() {

    // Variáveis

    float temperatura = 25.0;
    float umidade = 55.0;

    // temp>= 20 -> TRUE, temp <=30 -> TRUE, umidade > 50 -> TRUE, logo
    // TRUE AND TRUE AND TRUE -> TRUE
    
    if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
        printf("As condições estão favoráveis\n");
    } else {
        printf("As condições não estão favoráveis\n");
    }

    return 0;

}