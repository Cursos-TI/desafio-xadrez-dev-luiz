#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Variáveis
    int torre = 0, rainha = 0;

    // Movimentação do bispo
    for(int bispo = 0; bispo <= 4; bispo++){
        printf("Bispo: cima direita\n");
    }

    // Movimentação da torre
    do
    {
        printf("Torre: cima\n");
        torre++;
    } while (torre <= 4);
    
    // Movimentação da rainha
    while (rainha <= 7)
    {
        printf("Rainha: esquerda\n");
        rainha++;
    }
    
    // Exibe mensagem final de encerramento do processo
    printf("Movimentos concluídos\n");
    return 0;
}
