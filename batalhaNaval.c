#include <stdio.h>


#define linha 10
#define coluna 10
#define navio 3

int main() {

    // Variáveis para o tabuleiro
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com zeros
    for (int x = 0; x < linha; x++) {
        for (int y = 0; y < coluna; y++) {
            tabuleiro[x][y] = 0;
        }
    }

    // Posiciona um navio horizontalmente na linha 4
    for (int y = 1; y < 4; y++) {
        tabuleiro[4][y] = navio;
    }

    // Posiciona um navio verticalmente na coluna 6
    for (int x = 6; x < 9; x++) {
        tabuleiro[x][6] = navio;
    }

    // Posiciona um navio diagonalmente
    for (int i = 0; i < navio; i++) {
        tabuleiro[i][i] = navio;
    }

    // Posiciona outro navio diagonalmente
    for (int i = 0; i < navio; i++) {
        tabuleiro[i][9 - i] = navio;
    }

    // Exibe o tabuleiro
    for (int x = 0; x < linha; x++) {
        for (int y = 0; y < coluna; y++) {
            printf("%d ", tabuleiro[x][y]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
