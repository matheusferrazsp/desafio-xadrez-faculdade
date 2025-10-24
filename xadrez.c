#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    
    int torre = 0;
    int rainha = 0;
    int bispo = 0;

    // Movimentação da torre com loop for:
    for ( torre < 5; torre ++;) {
        printf("Torre moveu-se uma casa à direita.\n"); 
    }


    // Movimentação do bispo com loop while:
    while ( rainha < 8) {

        printf("Rainha moveu-se uma casa à esquerda.\n");

        rainha ++;
    }

    // Movimentação bispo loop do while:
    do {
        printf("Bispo moveu-se uma casa para cima e uma para direita.\n");
        bispo ++;
    } while (bispo < 5);

    return 0;
}
