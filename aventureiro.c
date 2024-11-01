#include <stdio.h>
#include <string.h>

// Definindo constantes para os movimentos das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO 3 // Definindo um movimento padrão para o cavalo

// Função para mover o bispo
void moverBispo() {
    printf("Movendo o Bispo:\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima, Direita\n");
    }
}

// Função para mover a torre
void moverTorre() {
    printf("Movendo a Torre:\n");
    int j = 0;
    while (j < MOVIMENTO_TORRE) {
        printf("Direita\n");
        j++;
    }
}

// Função para mover a rainha
void moverRainha() {
    printf("Movendo a Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTO_RAINHA);
}

// Função para mover o cavalo
void moverCavalo() {
    printf("Movendo o Cavalo:\n");

    // Usando um loop for aninhado dentro de um while para simular a movimentação em L do cavalo
    int i = 0; // Contador do loop externo
    while (i < MOVIMENTO_CAVALO) {
        for (int j = 0; j < 2; j++) { // O cavalo se move duas casas em uma direção e uma em outra
            if (j == 0) {
                printf("Cima\n"); // Primeira parte do movimento
            } else {
                printf("Direita\n"); // Segunda parte do movimento
            }
        }
        i++; // Incrementa o contador do loop externo
    }

    // Movimentação alternativa do cavalo (opcional)
    /*
    for (int i = 0; i < MOVIMENTO_CAVALO; i++) {
        printf("Direita\n"); // Primeira parte do movimento
        printf("Cima\n");     // Segunda parte do movimento
    }
    */
}

int main() {
    char escolha[10];

    // Instruções para o jogador
    printf("Escolha uma peça para mover (bispo, torre, rainha, cavalo): ");
    scanf("%s", escolha);

    // Verifica a escolha do jogador e chama a função correspondente
    if (strcmp(escolha, "bispo") == 0) {
        moverBispo();
    } else if (strcmp(escolha, "torre") == 0) {
        moverTorre();
    } else if (strcmp(escolha, "rainha") == 0) {
        moverRainha();
    } else if (strcmp(escolha, "cavalo") == 0) {
        moverCavalo();
    } else {
        printf("Escolha inválida! Por favor, escolha entre bispo, torre, rainha ou cavalo.\n");
    }

    return 0;
}