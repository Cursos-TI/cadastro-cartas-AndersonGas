#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Carta 1
  
  char estado;
  char codigo[5];
  char cidade[50];
  int populacao;
  float area;
  float PIB;
  int pontos;

  // Entrada de dados
  printf("CARTA 1:\n");
  printf("Escolha a letra do estado (de A até H): ");
  scanf(" %c", &estado);

  printf("Digite o codigo da carta (Letra escolhida + um número de 01 até 09): ");
  scanf("%s", codigo);

  printf("Qual o nome da cidade: ");
  scanf("%s", cidade);

  printf("Qual a população da cidade: ");
  scanf("%d", &populacao);

  printf("Qual a área da cidade em km²: ");
  scanf("%f", &area);

  printf("Qual o PIB da cidade: ");
  scanf("%f", &PIB);

  printf("Qual a quantidade de pontos turisticos (em números): ");
  scanf("%d", &pontos);

  float densidade = populacao / area;
  float PIBperCapita = PIB / populacao;

  // Exibição dos dados da cidade
  printf("Carta 1: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$ %.2f bilhões\n", PIB);
  printf("Pontos Turísticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade);
  printf("PIB per Capita: %.2f reais\n", PIBperCapita);
  printf("\n");
  
  // Carta 2
  
  char estado2;
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float PIB2;
  int pontos2;

  // Entrada de dados
  printf("CARTA 2:\n");
  printf("Escolha a letra do estado (de A até H): ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta (Letra escolhida + um número de 01 até 09): ");
  scanf("%s", codigo2);

  printf("Qual o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Qual a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Qual a área da cidade em km²: ");
  scanf("%f", &area2);

  printf("Qual o PIB da cidade: ");
  scanf("%f", &PIB2);

  printf("Qual a quantidade de pontos turisticos (em números): ");
  scanf("%d", &pontos2);

  float densidade2 = populacao2 / area2;
  float PIBperCapita2 = PIB2 / populacao2;

  // Exibição dos dados da cidade
  printf("Carta 1: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões\n", PIB2);
  printf("Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
  printf("\n");
  
  // Carta 3
  char estado3 = 'C';
  char codigo3[] = "C03";
  char cidade3[] = "Fortaleza";
  int populacao3 = 2578708;
  float area3 = 313.8;
  float PIB3 = 86.93;
  int pontos3 = 50;

  // Entrada de dados
  printf("CARTA 3:\n");
  printf("Escolha a letra do estado (de A até H): ");
  scanf(" %c", &estado3);

  printf("Digite o codigo da carta (Letra escolhida + um número de 01 até 09): ");
  scanf("%s", codigo3);

  printf("Qual o nome da cidade: ");
  scanf("%s", cidade3);

  printf("Qual a população da cidade: ");
  scanf("%d", &populacao3);

  printf("Qual a área da cidade em km²: ");
  scanf("%f", &area3);

  printf("Qual o PIB da cidade: ");
  scanf("%f", &PIB3);

  printf("Qual a quantidade de pontos turisticos (em números): ");
  scanf("%d", &pontos3);

  float densidade3 = populacao3 / area3;
  float PIBperCapita3 = PIB3 / populacao3;

  // Exibição dos dados da cidade
  printf("Carta 1: %c\n", estado3);
  printf("Código: %s\n", codigo3);
  printf("Cidade: %s\n", cidade3);
  printf("População: %d\n", populacao3);
  printf("Área: %.2f km²\n", area3);
  printf("PIB: R$ %.2f bilhões\n", PIB3);
  printf("Pontos Turísticos: %d\n", pontos3);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade3);
  printf("PIB per Capita: %.2f reais\n", PIBperCapita3);
  printf("\n");
  
return 0;
} 
