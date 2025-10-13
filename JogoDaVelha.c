#include <stdio.h>

#define TAM 10
#define TAM_HAB 5

int main() {
    int tabuleiro[TAM][TAM] = {0};

    int navioH[3] = {3, 3, 3};
    int navioV[3] = {3, 3, 3};
    int navioD1[3] = {3, 3, 3};
    int navioD2[3] = {3, 3, 3};

    int linhaH = 2, colunaH = 1;
    int linhaV = 5, colunaV = 7;
    int linhaD1 = 0, colunaD1 = 0;
    int linhaD2 = 0, colunaD2 = 9;

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
        tabuleiro[linhaV + i][colunaV] = navioV[i];
        tabuleiro[linhaD1 + i][colunaD1 + i] = navioD1[i];
        tabuleiro[linhaD2 + i][colunaD2 - i] = navioD2[i];
    }

    int habilidadeCone[TAM_HAB][TAM_HAB] = {0};
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (j >= TAM_HAB / 2 - i && j <= TAM_HAB / 2 + i) habilidadeCone[i][j] = 1;
        }
    }

    int habilidadeCruz[TAM_HAB][TAM_HAB] = {0};
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (i == TAM_HAB / 2 || j == TAM_HAB / 2) habilidadeCruz[i][j] = 1;
        }
    }

    int habilidadeOct[TAM_HAB][TAM_HAB] = {0};
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (i + j >= TAM_HAB / 2 && i + j < TAM_HAB + TAM_HAB / 2 - 1 &&
                j - i <= TAM_HAB / 2 && i - j <= TAM_HAB / 2) habilidadeOct[i][j] = 1;
        }
    }

    int origemConeL = 4, origemConeC = 4;
    int origemCruzL = 7, origemCruzC = 2;
    int origemOctL = 2, origemOctC = 7;

    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int l = origemConeL - TAM_HAB / 2 + i;
            int c = origemConeC - TAM_HAB / 2 + j;
            if (l >= 0 && l < TAM && c >= 0 && c < TAM && habilidadeCone[i][j] == 1)
                if (tabuleiro[l][c] == 0) tabuleiro[l][c] = 5;
        }
    }

    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int l = origemCruzL - TAM_HAB / 2 + i;
            int c = origemCruzC - TAM_HAB / 2 + j;
            if (l >= 0 && l < TAM && c >= 0 && c < TAM && habilidadeCruz[i][j] == 1)
                if (tabuleiro[l][c] == 0) tabuleiro[l][c] = 5;
        }
    }

    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int l = origemOctL - TAM_HAB / 2 + i;
            int c = origemOctC - TAM_HAB / 2 + j;
            if (l >= 0 && l < TAM && c >= 0 && c < TAM && habilidadeOct[i][j] == 1)
                if (tabuleiro[l][c] == 0) tabuleiro[l][c] = 5;
        }
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
