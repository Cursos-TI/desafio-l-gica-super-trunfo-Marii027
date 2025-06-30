#include <stdio.h>

// Definição da estrutura da carta
struct Carta {
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main() {
    // Cartas pré-definidas
    struct Carta carta1 = {"Belo Horizonte", 2500000, 331.4, 105.8, 20, 145.30};
    struct Carta carta2 = {"Palmas", 313349, 2218.9, 10.3, 15, 141.22};

    char atributo;

    // Menu interativo
    printf("=== SUPER TRUNFO: COMPARAÇÃO DE CIDADES ===\n");
    printf("Escolha o atributo para comparação:\n");
    printf("A - População\n");
    printf("B - Área (km²)\n");
    printf("C - PIB (em bilhões)\n");
    printf("D - Pontos turísticos\n");
    printf("E - Densidade Demográfica (hab/km²)\n");
    printf("Digite a letra correspondente: ");
    scanf(" %c", &atributo);

    printf("\n--- Comparação ---\n");

    // Comparação com base no atributo escolhido
    if (atributo == 'A' || atributo == 'a') {
        printf("Comparando População:\n");
        printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
        printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);
        if (carta1.populacao > carta2.populacao)
            printf("Resultado: %s venceu!\n", carta1.nome);
        else if (carta1.populacao < carta2.populacao)
            printf("Resultado: %s venceu!\n", carta2.nome);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 'B' || atributo == 'b') {
        printf("Comparando Área:\n");
        printf("%s: %.2f km²\n", carta1.nome, carta1.area);
        printf("%s: %.2f km²\n", carta2.nome, carta2.area);
        if (carta1.area > carta2.area)
            printf("Resultado: %s venceu!\n", carta1.nome);
        else if (carta1.area < carta2.area)
            printf("Resultado: %s venceu!\n", carta2.nome);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 'C' || atributo == 'c') {
        printf("Comparando PIB:\n");
        printf("%s: R$ %.1f bilhões\n", carta1.nome, carta1.pib);
        printf("%s: R$ %.1f bilhões\n", carta2.nome, carta2.pib);
        if (carta1.pib > carta2.pib)
            printf("Resultado: %s venceu!\n", carta1.nome);
        else if (carta1.pib < carta2.pib)
            printf("Resultado: %s venceu!\n", carta2.nome);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 'D' || atributo == 'd') {
        printf("Comparando Pontos Turísticos:\n");
        printf("%s: %d pontos\n", carta1.nome, carta1.pontosTuristicos);
        printf("%s: %d pontos\n", carta2.nome, carta2.pontosTuristicos);
        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
            printf("Resultado: %s venceu!\n", carta1.nome);
        else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
            printf("Resultado: %s venceu!\n", carta2.nome);
        else
            printf("Resultado: Empate!\n");

    } else if (atributo == 'E' || atributo == 'e') {
        printf("Comparando Densidade Demográfica:\n");
        printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade);
        printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade);
        // Densidade é ao contrário: menor valor vence
        if (carta1.densidade < carta2.densidade)
            printf("Resultado: %s venceu!\n", carta1.nome);
        else if (carta1.densidade > carta2.densidade)
            printf("Resultado: %s venceu!\n", carta2.nome);
        else
            printf("Resultado: Empate!\n");

    } else {
        printf("Opção inválida. Tente novamente com uma letra entre A e E.\n");
    }

    return 0;
}

