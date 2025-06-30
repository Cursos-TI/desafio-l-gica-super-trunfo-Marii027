#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dados fixos das cidades
    char cidade1[] = "Belo Horizonte";
    float pib1 = 105.8;           // em bilhões
    float area1 = 331.4;          // em km²
    float populacao1 = 2.315;     // em milhões
    int pontosTur1 = 20;          
    float densidade1 = 145.3;     // hab/km²

    char cidade2[] = "Palmas";
    float pib2 = 10.3;
    float area2 = 2219.1;
    float populacao2 = 0.313;
    int pontosTur2 = 15;
    float densidade2 = 141.0;

    char atributo1, atributo2;
    float valor1_c1 = 0, valor2_c1 = 0;
    float valor1_c2 = 0, valor2_c2 = 0;
    int empate = 0;

    printf("Bem-vindo ao Super Trunfo de Cidades!\n");
    printf("\nAtributos disponíveis:\n");
    printf("A. PIB (em bilhões de R$)\n");
    printf("B. Área (em km²)\n");
    printf("C. População (em milhões)\n");
    printf("D. Pontos turísticos\n");
    printf("E. Densidade demográfica (hab/km²)\n");

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo (A-E): ");
    scanf(" %c", &atributo1);

    // Menu dinâmico para o segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf(" %c", &atributo2);

    if (atributo1 == atributo2) {
        printf("Erro: você escolheu o mesmo atributo duas vezes!\n");
        return 1;
    }

    // Função auxiliar para comparar
    for (int i = 1; i <= 2; i++) {
        char atr = (i == 1) ? atributo1 : atributo2;

        switch (atr) {
            case 'A': case 'a':
                if (i == 1) {
                    valor1_c1 = pib1;
                    valor1_c2 = pib2;
                } else {
                    valor2_c1 = pib1;
                    valor2_c2 = pib2;
                }
                break;
            case 'B': case 'b':
                if (i == 1) {
                    valor1_c1 = area1;
                    valor1_c2 = area2;
                } else {
                    valor2_c1 = area1;
                    valor2_c2 = area2;
                }
                break;
            case 'C': case 'c':
                if (i == 1) {
                    valor1_c1 = populacao1;
                    valor1_c2 = populacao2;
                } else {
                    valor2_c1 = populacao1;
                    valor2_c2 = populacao2;
                }
                break;
            case 'D': case 'd':
                if (i == 1) {
                    valor1_c1 = pontosTur1;
                    valor1_c2 = pontosTur2;
                } else {
                    valor2_c1 = pontosTur1;
                    valor2_c2 = pontosTur2;
                }
                break;
            case 'E': case 'e':
                // Densidade: menor valor vence
                if (i == 1) {
                    valor1_c1 = -densidade1;  // invertendo para menor ser "maior"
                    valor1_c2 = -densidade2;
                } else {
                    valor2_c1 = -densidade1;
                    valor2_c2 = -densidade2;
                }
                break;
            default:
                printf("Atributo inválido!\n");
                return 1;
        }
    }

    // Soma dos valores
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    printf("\n--- Resultado da Comparação ---\n");
    printf("Carta 1: %s\n", cidade1);
    printf("  Valor atributo 1: %.2f\n", valor1_c1 > 0 ? valor1_c1 : -valor1_c1);
    printf("  Valor atributo 2: %.2f\n", valor2_c1 > 0 ? valor2_c1 : -valor2_c1);
    printf("  Soma total: %.2f\n", soma_c1);

    printf("\nCarta 2: %s\n", cidade2);
    printf("  Valor atributo 1: %.2f\n", valor1_c2 > 0 ? valor1_c2 : -valor1_c2);
    printf("  Valor atributo 2: %.2f\n", valor2_c2 > 0 ? valor2_c2 : -valor2_c2);
    printf("  Soma total: %.2f\n", soma_c2);

    if (soma_c1 > soma_c2) {
        printf("\n✅ Resultado: %s venceu a rodada!\n", cidade1);
    } else if (soma_c2 > soma_c1) {
        printf("\n✅ Resultado: %s venceu a rodada!\n", cidade2);
    } else {
        printf("\n🤝 Resultado: Empate!\n");
    }

    return 0;
}
