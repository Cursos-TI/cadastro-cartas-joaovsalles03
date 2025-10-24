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

    //======== COMPARAÇÕES ENTRE AS CARTAS========
    //Resultado 0 para falso (perdeu) e Resultado 1 para verdadeiro (venceu)

    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    //A menor densidade VENCE.
    int resultadoDensidade = densidade1 < densidade2;
    int resultadoPIBperCapita = pibPerCapita1 > pibPerCapita2;

    //Para exibir o resultado final.
    printf("\n==== Resultado das comparações ====\n");

    printf("No quesito de População: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
    printf("Em quantidade de Área: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
    printf("Com o maior PIB total: Carta %d venceu (%d)\n", resultadoPIB ? 1 : 2, resultadoPIB);
    printf("Com mais Pontos Turisticos: Carta %d venceu (%d)\n", resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
    printf("Com a Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidade ? 1 : 2, resultadoDensidade);
    printf("Com o melhor PIB Per Capita: Carta %d venceu (%d)\n", resultadoPIBperCapita ? 1 : 2, resultadoPIBperCapita);



    
    return 0;
}
