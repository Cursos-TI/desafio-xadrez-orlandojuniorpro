#include <stdio.h>
#include <string.h>

// Definindo constantes para os movimentos das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

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

int main() {
    char escolha[10];

    // Instruções para o jogador
    printf("Escolha uma peça para mover (bispo, torre, rainha): ");
    scanf("%s", escolha);

    // Verifica a escolha do jogador e chama a função correspondente
    if (strcmp(escolha, "bispo") == 0) {
        moverBispo();
    } else if (strcmp(escolha, "torre") == 0) {
        moverTorre();
    } else if (strcmp(escolha, "rainha") == 0) {
        moverRainha();
    } else {
        printf("Escolha inválida! Por favor, escolha entre bispo, torre ou rainha.\n");
    }

    return 0;
}