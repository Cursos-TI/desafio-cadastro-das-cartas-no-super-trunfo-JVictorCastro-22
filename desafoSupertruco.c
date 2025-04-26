#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis para a primeira carta
    char estado1, codigo1[4], nome1[20];
    unsigned int populacao1;
    float area1, pib1, dp1, pibpc1;
    int npt1;

    // Variáveis para a segunda carta
    char estado2, codigo2[4], nome2[20];
    unsigned int populacao2;
    float area2, pib2, dp2, pibpc2;
    int npt2;

    // Ler dados da primeira carta
    printf("\nDigite os dados da primeira carta:\n");
    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%u", &populacao1);
    printf("Área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &npt1);

    // Calcular dados adicionais para a primeira carta
    dp1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;

    // Ler dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%u", &populacao2);
    printf("Área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &npt2);

    // Calcular dados adicionais para a segunda carta
    dp2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;

    // Exibir dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade Populacional: %.2f hab/km²\n", dp1);
    printf("PIB per Capita: R$%.2f\n", pibpc1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    printf("PIB per Capita: R$%.2f\n", pibpc2);

    // Menu interativo
    int opcao;
    printf("\nEscolha o critério de comparação:\n");
    printf("1: População\n");
    printf("2: Área\n");
    printf("3: PIB\n");
    printf("4: Densidade Demográfica\n");
    printf("5: Número de Pontos Turísticos\n");
    scanf("%d", &opcao);

    // Lógica de comparação
    switch (opcao) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Carta 1 vence pela maior população.\n");
            } else if (populacao2 > populacao1) {
                printf("Carta 2 vence pela maior população.\n");
            } else {
                printf("Empate na população.\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("Carta 1 vence pela maior área.\n");
            } else if (area2 > area1) {
                printf("Carta 2 vence pela maior área.\n");
            } else {
                printf("Empate na área.\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("Carta 1 vence pelo maior PIB.\n");
            } else if (pib2 > pib1) {
                printf("Carta 2 vence pelo maior PIB.\n");
            } else {
                printf("Empate no PIB.\n");
            }
            break;
        case 4:
            if (dp1 < dp2) {
                printf("Carta 1 vence pela menor densidade demográfica.\n");
            } else if (dp2 < dp1) {
                printf("Carta 2 vence pela menor densidade demográfica.\n");
            } else {
                printf("Empate na densidade demográfica.\n");
            }
            break;
        case 5:
            if (npt1 > npt2) {
                printf("Carta 1 vence pelo maior número de pontos turísticos.\n");
            } else if (npt2 > npt1) {
                printf("Carta 2 vence pelo maior número de pontos turísticos.\n");
            } else {
                printf("Empate no número de pontos turísticos.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
