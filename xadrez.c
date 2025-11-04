#include <stdio.h>

// Desafio de Xadrez - MateCheck

    // Movimentação da torre com recursividade:
    void moverTorre(int casas){
        if(casas > 0){
        printf("Torre moveu-se uma casa à direita\n");
        moverTorre(casas - 1 );
        }
    }
    
    // Movimentação do bispo com recursividade:
    void moverRainha(int casas){
        if(casas > 0){
        printf("Rainha moveu-se uma casa à esquerda.\n");
        moverRainha(casas - 1);
        }
    }

    // Movimentação bispo com recursividade:
    void moverBispo(int i, int j){
        for (int i = 0; i < 5; i++) {
            printf("Bispo moveu-se uma casa para cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Bispo moveu-se uma casa para a direita\n");
        }
        }
    }
    
    // Movimentação do cavalo com loop aninhado:
    void moverCavalo(int cima, int direita){
        
        for (int i = 0; i < 1; i++) {
        
        for (int j = 0; j < cima; j++) {
            printf("Cavalo moveu-se uma casa à cima\n");
        }
        
        for (int k = 0; k < direita; k++) {
            printf("Cavalo moveu-se uma casa à direita\n");
        }
    }
}; 

    int main() {
        moverTorre(5);
        moverRainha(8);
        moverBispo(5,5);
        moverCavalo(2,1);
        return 0;
}