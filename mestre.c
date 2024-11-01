#include <stdio.h>
#include <string.h>

// Definindo constantes para os movimentos das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO 1 // Movimentação do cavalo em L

// Função recursiva para mover o bispo
void moverBispo(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão

    // Usando um loop aninhado para imprimir a movimentação diagonal
    for (int i = 0; i < casas; i++) {
        printf("Cima, Direita\n");
    }
    
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para mover a torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão

    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para mover a rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão

    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para mover o cavalo com múltiplas condições e variáveis
void moverCavalo() {
    printf("Movendo o Cavalo:\n");

    // Movimentação do cavalo em L: uma vez para cima e uma vez à direita
    for (int i = 0; i < MOVIMENTO_CAVALO; i++) {
        for (int j = 0; j < 2; j++) { // Loop interno para simular o movimento em L
            if (j == 0) {
                printf("Cima\n"); // Primeira parte do movimento
            } else {
                printf("Direita\n"); // Segunda parte do movimento
            }
        }
    }
}

int main() {
    char escolha[10];

    // Instruções para o jogador
    printf("Escolha uma peça para mover (bispo, torre, rainha, cavalo): ");
    scanf("%s", escolha);

    // Verifica a escolha do jogador e chama a função correspondente
    if (strcmp(escolha, "bispo") == 0) {
        printf("Movendo o Bispo:\n");
        moverBispo(MOVIMENTO_BISPO);
    } else if (strcmp(escolha, "torre") == 0) {
        printf("Movendo a Torre:\n");
        moverTorre(MOVIMENTO_TORRE);
    } else if (strcmp(escolha, "rainha") == 0) {
        printf("Movendo a Rainha:\n");
        moverRainha(MOVIMENTO_RAINHA);
    } else if (strcmp(escolha, "cavalo") == 0) {
        moverCavalo();
    } else {
        printf("Escolha inválida! Por favor, escolha entre bispo, torre, rainha ou cavalo.\n");
    }

    return 0;
}