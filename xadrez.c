#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Variáveis
    int torre = 0, rainha = 0, cavalo, bispo;

    // Movimentação do bispo (cinco casas na diagonal direita)
    for(bispo = 0; bispo <= 4; bispo++){
        printf("Bispo: cima direita\n");
    }

    // Movimentação da torre (5 casas para cima)
    do
    {
        printf("Torre: cima\n");
        torre++;
    } while (torre <= 4);
    
    // Movimentação da rainha (08 casas para esquerda)
    while (rainha <= 7)
    {
        printf("Rainha: esquerda\n");
        rainha++;
    }
    
    // Separador branco
    printf("---------------------------------------\n");

    //Movimentação do cavalo (duas casas para baixo e uma para esquerda)
    for(cavalo = 0; cavalo < 1; cavalo++){
        for(int i = 0; i <= 1; i++){
            printf("Cavalo: baixo\n");
        }

        printf("Cavalo: esquerda\n");
    }

    // Exibe mensagem final de encerramento do processo
    printf("Movimentos concluídos\n");
    return 0;
}
