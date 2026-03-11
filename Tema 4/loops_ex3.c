#include <stdio.h>
 
int main() {

    int i = 1;

    do { // Loop Externo

        int j = 1;

        do { // Loop Interno

            printf("%d\t", i * j);
            j++;
        } 
        while (j <= 10);

        printf("\n");

        i++;

    } 
    while (i <= 10);

    return 0;
}