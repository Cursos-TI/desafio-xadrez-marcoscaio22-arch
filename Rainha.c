#include <stdio.h>

int main () {
    
    char i = 1;
    // Mover a Rainha 8 vezes para Horizontal Esquerda
    while (i <= 8)
    {
        printf("Horizontal Esquerda\n", i); // Imprimir a direção do movimento
        i++;
    }

    return 0;
}