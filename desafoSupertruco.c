#include <stdio.h>
#include <stdlib.h>

/* Programa de comparação de cartas de cidades.
   Usuário insere atributos das cartas e o programa compara
   dois atributos escolhidos pelo jogador para decidir a melhor carta. */

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

    // Escolha de dois atributos
    int atributo1, atributo2;

    printf("\nEscolha dois atributos para a comparação:\n");
    printf("1: População\n");
    printf("2: Área\n");
    printf("3: PIB\n");
    printf("4: Densidade Demográfica\n");
    printf("5: Número de Pontos Turísticos\n");

    // Menu dinâmico para o primeiro atributo
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Menu dinâmico para o segundo atributo
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("Você não pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
        }
    } while (atributo2 == atributo1);

    // Função para comparar atributos
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2, soma1, soma2;

    // Obter valores do primeiro atributo
    switch (atributo1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = dp1; valor2_attr1 = dp2; break;
        case 5: valor1_attr1 = npt1; valor2_attr1 = npt2; break;
        default: printf("Opção inválida.\n"); return 1;
    }

    // Obter valores do segundo atributo
    switch (atributo2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = dp1; valor2_attr2 = dp2; break;
        case 5: valor1_attr2 = npt1; valor2_attr2 = npt2; break;
        default: printf("Opção inválida.\n"); return 1;
    }

    // Comparar atributos individualmente e somar os valores
    printf("\nComparação dos atributos escolhidos:\n");
    printf("Atributo 1:\n");
    printf("Valor da Carta 1: %.2f\n", valor1_attr1);
    printf("Valor da Carta 2: %.2f\n", valor2_attr1);
    if (atributo1 == 4) { // Exceção para densidade demográfica
        printf("%s venceu pelo menor valor no atributo 1.\n",
               valor1_attr1 < valor2_attr1 ? nome1 : nome2);
    } else {
        printf("%s venceu pelo maior valor no atributo 1.\n",
               valor1_attr1 > valor2_attr1 ? nome1 : nome2);
    }

    printf("Atributo 2:\n");
    printf("Valor da Carta 1: %.2f\n", valor1_attr2);
    printf("Valor da Carta 2: %.2f\n", valor2_attr2);
    if (atributo2 == 4) { // Exceção para densidade demográfica
        printf("%s venceu pelo menor valor no atributo 2.\n",
               valor1_attr2 < valor2_attr2 ? nome1 : nome2);
    } else {
        printf("%s venceu pelo maior valor no atributo 2.\n",
               valor1_attr2 > valor2_attr2 ? nome1 : nome2);
    }

    // Soma dos valores
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;
    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);
    if (soma1 > soma2) {
        printf("A Carta 1 vence pela maior soma dos atributos!\n");
    } else if (soma2 > soma1) {
        printf("A Carta 2 vence pela maior soma dos atributos!\n");
    } else {
        printf("Empate na soma dos atributos!\n");
    }

    return 0;
}