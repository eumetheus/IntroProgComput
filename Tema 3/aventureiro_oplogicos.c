#include <stdio.h>

int main() {
   
    // Variáveis

    int a = 5;
    int b = -10;
    int c = 0;

    // a>0 -> TRUE b<0 -> TRUE c==0 -> TRUE  logo TRUE AND TRUE OR TRUE -> TRUE

    if (a > 0 && b < 0 || c == 0) {
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }

    return 0;
}