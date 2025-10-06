#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float quilometragem1, quilometragem2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // ======= CARTA 1 =======
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²) da Carta 1: ");
    scanf("%f", &quilometragem1);

    printf("Digite o PIB (em bilhões) da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    float densidade1 = (float) populacao1 / quilometragem1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // ======= CARTA 2 =======
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²) da Carta 2: ");
    scanf("%f", &quilometragem2);

    printf("Digite o PIB (em bilhões) da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = (float) populacao2 / quilometragem2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ======= MENU INTERATIVO =======
    int opcao1, opcao2;

    printf("\n=== Escolha o 1º atributo para comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    printf("\n=== Escolha o 2º atributo para comparação ===\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nErro: os dois atributos devem ser diferentes.\n");
        return 0;
    }

    // ======= COMPARAÇÕES =======
    float soma1 = 0, soma2 = 0;

    printf("\n=== Resultado da Comparação ===\n");
    printf("Cartas: %s x %s\n\n", cidade1, cidade2);

    switch (opcao1) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            printf("Vencedora: %s\n\n",
                   populacao1 > populacao2 ? cidade1 :
                   populacao2 > populacao1 ? cidade2 : "Empate!");
            soma1 += populacao1;
            soma2 += populacao2;
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", cidade1, quilometragem1);
            printf("%s: %.2f km²\n", cidade2, quilometragem2);
            printf("Vencedora: %s\n\n",
                   quilometragem1 > quilometragem2 ? cidade1 :
                   quilometragem2 > quilometragem1 ? cidade2 : "Empate!");
            soma1 += quilometragem1;
            soma2 += quilometragem2;
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            printf("Vencedora: %s\n\n",
                   pib1 > pib2 ? cidade1 :
                   pib2 > pib1 ? cidade2 : "Empate!");
            soma1 += pib1;
            soma2 += pib2;
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            printf("Vencedora: %s\n\n",
                   pontosTuristicos1 > pontosTuristicos2 ? cidade1 :
                   pontosTuristicos2 > pontosTuristicos1 ? cidade2 : "Empate!");
            soma1 += pontosTuristicos1;
            soma2 += pontosTuristicos2;
            break;

        case 5:
            printf("Comparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            printf("Vencedora: %s\n\n",
                   densidade1 < densidade2 ? cidade1 :
                   densidade2 < densidade1 ? cidade2 : "Empate!");
            soma1 += densidade1;
            soma2 += densidade2;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    switch (opcao2) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            printf("Vencedora: %s\n\n",
                   populacao1 > populacao2 ? cidade1 :
                   populacao2 > populacao1 ? cidade2 : "Empate!");
            soma1 += populacao1;
            soma2 += populacao2;
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", cidade1, quilometragem1);
            printf("%s: %.2f km²\n", cidade2, quilometragem2);
            printf("Vencedora: %s\n\n",
                   quilometragem1 > quilometragem2 ? cidade1 :
                   quilometragem2 > quilometragem1 ? cidade2 : "Empate!");
            soma1 += quilometragem1;
            soma2 += quilometragem2;
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            printf("Vencedora: %s\n\n",
                   pib1 > pib2 ? cidade1 :
                   pib2 > pib1 ? cidade2 : "Empate!");
            soma1 += pib1;
            soma2 += pib2;
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            printf("Vencedora: %s\n\n",
                   pontosTuristicos1 > pontosTuristicos2 ? cidade1 :
                   pontosTuristicos2 > pontosTuristicos1 ? cidade2 : "Empate!");
            soma1 += pontosTuristicos1;
            soma2 += pontosTuristicos2;
            break;

        case 5:
            printf("Comparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            printf("Vencedora: %s\n\n",
                   densidade1 < densidade2 ? cidade1 :
                   densidade2 < densidade1 ? cidade2 : "Empate!");
            soma1 += densidade1;
            soma2 += densidade2;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("=== Soma dos Atributos ===\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("\nCarta vencedora: %s!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\nCarta vencedora: %s!\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
