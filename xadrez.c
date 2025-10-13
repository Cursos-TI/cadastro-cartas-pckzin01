#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Cima, Direita\n");
        }
    }
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    printf("=== Torre ===\n");
    moverTorre(5);

    printf("\n=== Bispo ===\n");
    moverBispo(1, 5);

    printf("\n=== Rainha ===\n");
    moverRainha(8);

    printf("\n=== Cavalo ===\n");
    int i = 0;
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }

    printf("\n=== Cavalo (movimento avançado) ===\n");
    int cima = 0, direita = 0;
    for (cima = 0; cima < 2; cima++) {
        printf("Cima\n");
        int temp = cima;
        while (temp == 1) {
            printf("Direita\n");
            break;
        }
    }

    return 0;
}

