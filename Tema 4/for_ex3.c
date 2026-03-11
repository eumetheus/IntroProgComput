#include <stdio.h>
 
int main() {
    
    // Incremento de 10 em 10

    int i = 0;

    /*for (i; i <= 100; i += 10) {
        printf("%d\n", i);
    }*/

    // Decremento de 10 em 10

    for (int i = 100; i >= 0; i -= 10) {
        printf("%d\n", i);
    }
   
    return 0;
}