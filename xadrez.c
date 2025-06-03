#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre: Movimentação das peças com funções recursivas e loops avançados

// Constantes para o número de casas de cada peça
#define BISPO_CASAS 5
#define TORRE_CASAS 5
#define RAINHA_CASAS 8

// Função recursiva para movimentação do Bispo (diagonal superior direita)
void moverBispo(int passo) {
    if (passo > BISPO_CASAS) return;
    // O bispo se move para cima e para a direita ao mesmo tempo
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passo + 1);
}

// Função recursiva para movimentação da Torre (direita)
void moverTorre(int passo) {
    if (passo > TORRE_CASAS) return;
    printf("Direita\n");
    moverTorre(passo + 1);
}

// Função recursiva para movimentação da Rainha (esquerda)
void moverRainha(int passo) {
    if (passo > RAINHA_CASAS) return;
    printf("Esquerda\n");
    moverRainha(passo + 1);
}

// Função para movimentação do Cavalo (L para cima à direita)
// Utiliza loops aninhados, múltiplas variáveis e condições avançadas
void moverCavalo() {
    // O cavalo pode se mover em L: 2 para cima e 1 para a direita
    // ou 1 para cima e 2 para a direita (aqui, vamos simular 1 vez em L para cima à direita)
    int movimentos[2][2] = {{2, 1}, {1, 2}}; // {vertical, horizontal}
    int i, j;
    for (i = 0; i < 2; i++) {
        // Loop externo para cada tipo de movimento em L
        for (j = 0; j < 2; j++) {
            if (i == j) {
                // Apenas um dos movimentos é válido para cima à direita
                continue; // pula para o próximo caso
            }
            printf("Cavalo: ");
            // Movimenta para cima
            for (int k = 0; k < movimentos[i][0]; k++) {
                printf("Cima ");
            }
            // Movimenta para a direita
            for (int k = 0; k < movimentos[i][1]; k++) {
                printf("Direita ");
            }
            printf("\n");
            break; // Realiza apenas um movimento em L
        }
        break; // Garante que só um movimento seja feito
    }
}

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    moverBispo(1);

    // Movimentação da Torre
    printf("\nMovimentação da Torre (5 casas para a direita):\n");
    moverTorre(1);

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha (8 casas para a esquerda):\n");
    moverRainha(1);

    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo (1 vez em L para cima à direita):\n");
    moverCavalo();

    return 0;
}
