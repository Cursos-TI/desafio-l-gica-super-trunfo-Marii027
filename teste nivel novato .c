#include <stdio.h>

int main(){
    printf("Super trunfo: Desenvolvendo a lógica do jogo. \n");

    // --- Carta 1: Belo Horizonte (Minas Gerais) ---
    char estado1 = 'M';
    char codigo1[] = "M01";
    char nomeCidade1[] = "Belo Horizonte";
    int populacao1 = 2416339;
    float area1 = 331.354;
    float pib1 = 105.8; // PIB em bilhões
    int pontosTuristicos1 = 25;

    // --- Carta 2: Palmas (Tocantins) ---
    char estado2 = 'T';
    char codigo2[] = "T01";
    char nomeCidade2[] = "Palmas";
    int populacao2 = 323625;
    float area2 = 2227.329;
    float pib2 = 10.3; // PIB em bilhões
    int pontosTuristicos2 = 20;

    // Cálculo da densidade populacional
    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;

    // Cálculo do PIB per capita
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- Exibição dos dados das cartas ---
    printf("--- Carta 1 ---\n");
    printf("Cidade: %s (%c)\n", nomeCidade1, estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.1f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita1);

    printf("--- Carta 2 ---\n");
    printf("Cidade: %s (%c)\n", nomeCidade2, estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.1f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita2);

    // --- Comparação baseada no atributo PIB ---
    printf("Comparação de cartas (Atributo: PIB):\n");

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu com PIB de R$ %.1f bilhões!\n", nomeCidade1, pib1);
        printf("Carta 2 (%s) teve PIB de R$ %.1f bilhões.\n", nomeCidade2, pib2);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu com PIB de R$ %.1f bilhões!\n", nomeCidade2, pib2);
        printf("Carta 1 (%s) teve PIB de R$ %.1f bilhões.\n", nomeCidade1, pib1);
    } else {
        printf("Resultado: Empate! Ambas as cidades têm o mesmo PIB de R$ %.1f bilhões.\n", pib1);
    }

    return 0;
}



