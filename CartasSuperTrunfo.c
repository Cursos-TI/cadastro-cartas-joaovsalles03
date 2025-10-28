#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada dos dados da Carta 1.
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    
    printf("\n");

    // Entrada dos dados da Carta 2.
    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Exibição dos dados da Carta 1.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("O PIB per capita é: %.2f\n", pibPerCapita1);

    // Exibição dos dados da Carta 2.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("O PIB per capita é: %.2f\n", pibPerCapita2);

//======== MENU INTERATIVO ========
    int opcao;
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o atributo para comparar (1-6): ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    //======== LÓGICA DE COMPARAÇÃO ========
    switch(opcao) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedora: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2)
                printf("Vencedora: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Vencedora: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (MENOR VENCE)
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedora: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per Capita
            printf("Atributo escolhido: PIB per Capita\n");
            printf("%s: %.2f reais\n", cidade1, pibPerCapita1);
            printf("%s: %.2f reais\n", cidade2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedora: %s\n", cidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

       case 7: { // Comparação Geral
            printf("Atributo escolhido: Comparação Geral (Soma dos Atributos)\n");

            // Normalizando atributos com pesos para somatória
            float soma1 = populacao1 + area1 + pib1 + pontosTuristicos1 + (1000000.0f / densidade1) + (pibPerCapita1 / 1000.0f);
            float soma2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1000000.0f / densidade2) + (pibPerCapita2 / 1000.0f);

            printf("%s: %.2f pontos totais\n", cidade1, soma1);
            printf("%s: %.2f pontos totais\n", cidade2, soma2);

            if (soma1 == soma2)
                printf("Empate geral!\n");
            else if (soma1 > soma2)
                printf("Vencedora geral: %s\n", cidade1);
            else
                printf("Vencedora geral: %s\n", cidade2);
            break;
        }

        default:
            printf("Opção inválida! Escolha um número de 1 a 7.\n");
    }

    printf("\n===== FIM DA PARTIDA =====\n");
    return 0;
}
