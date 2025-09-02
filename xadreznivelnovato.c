#include <stdio.h>

int main () {

    int i = 0;

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

    printf("Xeque mate, o [JOGADOR] venceu!\n");
    
return 0;
}
