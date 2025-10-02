#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float quilometragem1, quilometragem2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // ======= CARTA 1 =======
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", &cidade1);

    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²) da Carta 1: ");
    scanf("%f", &quilometragem1);

    printf("Digite o PIB (em bilhões) da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // cálculos carta 1
    float densidade1 = (float) populacao1 / quilometragem1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float superPoder1 = (float) populacao1 + quilometragem1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // ======= CARTA 2 =======
    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", &cidade2);

    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²) da Carta 2: ");
    scanf("%f", &quilometragem2);

    printf("Digite o PIB (em bilhões) da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // cálculos carta 2
    float densidade2 = (float) populacao2 / quilometragem2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    float superPoder2 = (float) populacao2 + quilometragem2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);



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

    // ======= COMPARAÇÃO =======

    printf("\n\n=== Comparação de Cartas(Atributo: População) ===\n");
    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);
    } else {
        printf("Resultado: Carta 1 (%s) venceu!", cidade2);
    };
    

    return 0;
}
