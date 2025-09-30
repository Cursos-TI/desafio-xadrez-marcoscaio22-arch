#include <stdio.h>

int main () {
    
    char i = 1;
    
    printf("*** MOVIMENTO DA TORRE ***\n");
    
    // Mover a Torre 5 vezes na Vertical
    
    do {
    
        printf("Vertical\n"); // imprimir a direção do movimento
        i++;

    } while (i <= 5);
    
    return 0;
}