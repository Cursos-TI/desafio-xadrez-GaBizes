#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva com loops aninhados para o Bispo
void moverBispo(int linhas, int colunas) {
    if (linhas == 0) return;
    for (int j = 0; j < colunas; j++) {
        printf("Direita\n");
    }
    printf("Cima\n");
    moverBispo(linhas - 1, colunas);
}

int main() {
    printf("Implementação de Movimentação do Bispo:\n");
    moverBispo(5, 1);

    printf("\nImplementação de Movimentação da Rainha:\n");
    moverRainha(8);

    printf("\nImplementação de Movimentação da Torre:\n");
    moverTorre(5);

    printf("\nImplementação de Movimentação do Cavalo:\n");
    int movimentos = 2; // simula 2 movimentos em "L"
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
                continue;
            }
            printf("Direita\n");
        }
    }

    return 0;
}

