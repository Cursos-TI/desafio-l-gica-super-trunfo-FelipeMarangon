#include <stdio.h>

int main() {
    // Declaração de Variáveis
    char estado1[50], estado2[50];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidadepopulacional1 = (float) populacao1 / area1;
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;
    superpoder1 = (float) populacao1 + pontosturisticos1 + pib1 + area1 + (1 / densidadepopulacional1) + pibpercapita1;
    superpoder2 = (float) populacao2 + pontosturisticos2 + pib2 + area2 + (1 / densidadepopulacional2) + pibpercapita2;

    // Leitura das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.6f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.6f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparação das Cartas
    printf("\nComparação entre as cartas:\n");

    if (populacao1 > populacao2)
        printf("População: Carta 1 vence (%lu)\n", populacao1);
    else if (populacao2 > populacao1)
        printf("População: Carta 2 vence (%lu)\n", populacao2);
    else
        printf("População: Empate\n");

    if (area1 > area2)
        printf("Área: Carta 1 vence (%.2f)\n", area1);
    else if (area2 > area1)
        printf("Área: Carta 2 vence (%.2f)\n", area2);
    else
        printf("Área: Empate\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 vence (%.2f)\n", pib1);
    else if (pib2 > pib1)
        printf("PIB: Carta 2 vence (%.2f)\n", pib2);
    else
        printf("PIB: Empate\n");

    if (pontosturisticos1 > pontosturisticos2)
        printf("Pontos Turísticos: Carta 1 vence (%d)\n", pontosturisticos1);
    else if (pontosturisticos2 > pontosturisticos1)
        printf("Pontos Turísticos: Carta 2 vence (%d)\n", pontosturisticos2);
    else
        printf("Pontos Turísticos: Empate\n");

    if (densidadepopulacional1 < densidadepopulacional2) 
        printf("Densidade Populacional: Carta 1 vence (%.2f)\n", densidadepopulacional1);
    else if (densidadepopulacional2 < densidadepopulacional1)
        printf("Densidade Populacional: Carta 2 vence (%.2f)\n", densidadepopulacional2);
    else
        printf("Densidade Populacional: Empate\n");

    if (pibpercapita1 > pibpercapita2)
        printf("PIB per Capita: Carta 1 vence (%.6f)\n", pibpercapita1);
    else if (pibpercapita2 > pibpercapita1)
        printf("PIB per Capita: Carta 2 vence (%.6f)\n", pibpercapita2);
    else
        printf("PIB per Capita: Empate\n");

    if (superpoder1 > superpoder2)
        printf("Super Poder: Carta 1 vence (%.2f)\n", superpoder1);
    else if (superpoder2 > superpoder1)
        printf("Super Poder: Carta 2 vence (%.2f)\n", superpoder2);
    else
        printf("Super Poder: Empate\n");

    return 0;
}
