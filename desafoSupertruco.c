#include <stdio.h>

int main() {
 //declarar variáveis para a primeira carta
char estado1;
char codigo1[4];
char nome1[20];
int populacao1;
float area1;
float pib1;
int npt1; //número de pontos turísticos
float dp1; // Densidade Populacional
float pibpc1; // PIB per Capita:

// Ler variáveis para a primeira carta

printf("\n Digite os dados da primeira carta.\n");

printf("Digite uma letra de 'A' a 'H':\n");
scanf("%c", &estado1);

printf("Digite o codigo da carta (ex:A01):\n");
scanf("%s", codigo1);

printf("Digite o nome da cidade:\n");
scanf("%s", nome1);

printf("Digite a população da cidade:\n");
scanf("%d", &populacao1);

printf("Digite Digite a área da cidade (em km²):\n");
scanf("%f", &area1);

printf("Digite o PIB:\n");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos da cidade:\n");
scanf("%d", &npt1);

printf("Digite a densidade Populacional:\n");
scanf("%f", &dp1);

printf("Digite o PIB per Capita:\n");
scanf("%f", &pibpc1);





printf("\n Próxima carta:\n");

//declarar variáveis para a segunda carta
char estado2;;
char codigo2[4];
char nome2[20];
int populacao2;
float area2;
float pib2;
int npt2; //número de pontos turísticos
float dp2; // Densidade Populacional
float pibpc2; // PIB per Capita:


printf("\n Digite os dados da primeira carta.\n");
// Ler variáveis para a segunda carta
printf("Digite uma letra de 'A' a 'H':\n");
scanf(" %c", &estado2);

printf("Digite o codigo da carta (ex:A01):\n");
scanf("%s", codigo2);

printf("Digite o nome da cidade:\n");
scanf("%s", nome2);

printf("Digite a população da cidade:\n");
scanf("%d", &populacao2);

printf("Digite Digite a área da cidade (em km²):\n");
scanf("%f", &area2);

printf("Digite o PIB:\n");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos da cidade:\n");
scanf("%d", &npt2);

printf("Digite a densidade Populacional:\n");
scanf("%f", &dp2);

printf("Digite PIB per Capita:\n");
scanf("%f", &pibpc2);


//Exibir dados da primeira carta

printf("\n Carta 1:\n");
printf("Estado:%c\n", estado1);
printf("Código:%s\n", codigo1);
printf("Nome da cidade:%s\n", nome1);
printf("População:%d\n", populacao1);
printf("Área da cidade em: %2.f km²\n", area1);
printf("PIB: %2.f Bilhões de reais \n", pib1);
printf("Número de pontos turísticos:%d\n", npt1);
printf("Densidade Populacional:%2.f hab/km²\n",dp1);
printf("PIB per Capita:%2.f de Reias\n",pibpc1);

//Exibir dados da segunda carta

printf("\n Carta 2:\n");
printf("Estado:%c\n", estado2);
printf("Código:%s\n", codigo2);
printf("Nome da cidade:%s\n", nome2);
printf("População:%d\n", populacao2);
printf("Área da cidade em: %2.f km²\n", area2);
printf("PIB:%2.f Bilhões de reais \n", pib2);
printf("Número de pontos turísticos:%d\n", npt2);
printf("Densidade Populacional:%2.f hab/km²\n",dp2);
printf("PIB per Capita:%2.f de Reias\n",pibpc2);   
    
    
    
}