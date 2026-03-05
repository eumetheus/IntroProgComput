#include <stdio.h>

int main() {

    // Comparar e fazer o casting de forma explícita

    int num = 10;           // Int
    float result = 10.2;    // Float


    int comparison = (float) num == result;  // Casting para Float, mas usa apenas a parte inteira para armazenar, já que a variável é int (0 OU 1)

    printf("num == result: %d\n", comparison);

    return 0;
}

