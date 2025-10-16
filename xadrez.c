#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int c){ // Movimentação da torre (5 casas para cima)

    do
    {
        printf("Torre: direita\n");
        c--;
    } while (c > 0);

}

void moverRainha(int c){ // Movimentação da rainha (08 casas para esquerda)

    while (c > 0)
    {
        printf("Rainha: esquerda\n");
        c--;
    } 
}

void moverBispo(int c){ // Movimentação do bispo (cinco casas na diagonal direita)
    
    for(c; c > 0 ; c--){ // Loop aninhado para o Bispo
        printf("Bispo: cima\n");
        for(int i = c; i == c; i--){

            int casaAtual = 0;

            casaAtual = i == 5 ? 1 : casaAtual; // Facilita a visualização da casa atual que o Bispo está movendo
            casaAtual = i == 4 ? 2 : casaAtual;
            casaAtual = i == 3 ? 3 : casaAtual;
            casaAtual = i == 2 ? 4 : casaAtual;
            casaAtual = i == 1 ? 5 : casaAtual;

            printf("Bispo: direita [º%d casa]\n", casaAtual);
        }
    }
}

void moverCavalo(int c){ //Movimentação do cavalo (duas casas para cima e uma para direita)

    for(c; c >= 3; c--){

        printf("---------------------------------------\n"); // Separador branco
        for(int i = 0, j = c; i < j; i++){
            printf("Cavalo: cima\n");
            j--;
        }

        printf("Cavalo: direita\n");

    }
}

int main() {

    // Variáveis
    int casasTorre, casasRainha, casasBispo, casasCavalo;
    
    casasTorre = 5;
    casasRainha = 8;
    casasBispo = 5;
    casasCavalo = 3;

    moverTorre(casasTorre);
    moverRainha(casasRainha);
    moverBispo(casasBispo);
    moverCavalo(casasCavalo);

    // Exibe mensagem final de encerramento do processo
    printf("Movimentos concluídos\n");
    return 0;
}
