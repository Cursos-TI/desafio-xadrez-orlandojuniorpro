#include <stdio.h>

// Definindo constantes para os movimentos das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    
    // Usando loop for para o movimento do bispo
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima, Direita\n");
    }

    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimentação da Torre:\n");

    // Usando loop while para o movimento da torre
    int j = 0;
    while (j < MOVIMENTO_TORRE) {
        printf("Direita\n");
        j++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimentação da Rainha:\n");

    // Usando loop do-while para o movimento da rainha
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTO_RAINHA);

    return 0;
}