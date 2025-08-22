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
    int menu, opcao, comparacao;
    //Menu
    printf("***Menu***\n");
    printf("1 - Jogar\n");
    printf("2- Regras\n");
    scanf("%d", &menu);

    switch (menu){
    case 1:
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

        printf("1 - MOSTRAR TODOS STATUS\n");
        printf("2 - MOSTRAR STATUS SEPARADOS\n");
        scanf("%d", &comparacao);
        if(comparacao ==1) {
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
         }  else if (comparacao == 2) {
             // Menu de comparação
                printf("\n===== MENU DE COMPARAÇÃO =====\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turísticos\n");
                printf("5 - Densidade Demográfica\n");
                printf("6 - PIB per Capita\n");
                printf("7 - Super Poder\n");
                scanf("%d", &opcao);
                switch (opcao) {
                    case 1:
                        printf("População: %lu x %lu\n", populacao1, populacao2);
                        if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
                        else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 2:
                        printf("Área: %.2f x %.2f\n", area1, area2);
                        if (area1 > area2) printf("Vencedor: %s\n", cidade1);
                        else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 3:
                        printf("PIB: %.2f x %.2f\n", pib1, pib2);
                        if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
                        else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 4:
                        printf("Pontos Turísticos: %d x %d\n", pontosturisticos1, pontosturisticos2);
                        if (pontosturisticos1 > pontosturisticos2) printf("Vencedor: %s\n", cidade1);
                        else if (pontosturisticos2 > pontosturisticos1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 5:
                        printf("Densidade: %.2f x %.2f\n", densidadepopulacional1, densidadepopulacional2);
                        if (densidadepopulacional1 < densidadepopulacional2) printf("Vencedor: %s\n", cidade1);
                        else if (densidadepopulacional2 < densidadepopulacional1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 6:
                        printf("PIB per Capita: %.2f x %.2f\n", pibpercapita1, pibpercapita2);
                        if (pibpercapita1 > pibpercapita2) printf("Vencedor: %s\n", cidade1);
                        else if (pibpercapita2 > pibpercapita1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    case 7:
                        printf("Super Poder: %.2f x %.2f\n", superpoder1, superpoder2);
                        if (superpoder1 > superpoder2) printf("Vencedor: %s\n", cidade1);
                        else if (superpoder2 > superpoder1) printf("Vencedor: %s\n", cidade2);
                        else printf("Empate!\n");
                        break;
                    default:
                     printf("Opção inválida!\n");
                break;
                }
                
            } else {
                printf("Opção inválida!\n");
            } 
    break;

    case 2:
            printf("\n===== REGRAS DO JOGO =====\n");
            printf("Cada carta representa uma cidade com atributos:\n");
            printf("- População\n- Área\n- PIB\n- Pontos Turísticos\n");
            printf("- Densidade Demográfica (menor vence)\n");
            printf("- PIB per Capita\n- Super Poder\n");
            break;

        default:
            printf("Opção inválida!\n");
        break;
        }   
        
return 0;
}