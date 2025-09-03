#include <stdio.h>

int main () {

    int i = 0;
    int movimentoCavalo = 1;

    printf("\n=>  JOGO DE XADREZ    ");
    printf("\n[JOGADOR] Mova a Torre 5 casas para direita: \n");

    // Move a torre 5 casas para direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Move o bispo 5 casas em diagonal a direita
    printf("\n[COMPUTADOR] Mova o Bispo 5 casas para direita: \n");
    i = 0;
    while (i < 5)
    {
        printf("Cima, Direita\n");
        i++;
    }

    // Move a rainha 8 casas para esquerda
    printf("\n[JOGADOR] Mova a Rainha 8 casas para esquerda: \n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    // Move o Cavalo em L
    printf("\n[COMPUTADOR] Mova o Cavalo 2 casas para baixo e 1 para esqueda: \n");
    int contar = 0;
    while (contar < movimentoCavalo) // Loop externo (while)
    {
        for (int i = 0; i < 2; i++) // Loop interno (for)
        {
           printf("Baixo\n"); 
        }
        printf("Esquerda\n");
        contar++;
    }
    printf("===Xeque mate, o [COMPUTADOR] venceu!===\n");
    
return 0;
}