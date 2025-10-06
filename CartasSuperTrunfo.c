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

    // ======= EXIBIÇÃO =======
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", quilometragem1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", quilometragem2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ======= MENU INTERATIVO =======
    int opcao;
    printf("\n=== Escolha o atributo para comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparação ===\n");

    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: %s!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", cidade1, quilometragem1);
            printf("%s: %.2f km²\n", cidade2, quilometragem2);
            if (quilometragem1 > quilometragem2)
                printf("Vencedora: %s!\n", cidade1);
            else if (quilometragem2 > quilometragem1)
                printf("Vencedora: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s!\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedora: %s!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedora: %s!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
