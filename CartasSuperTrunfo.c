#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado = 'A';
  char codigo[] = "A01";
  char cidade[] = "São Paulo";
  int populacao = 11451999;
  float area = 1521.2;
  float PIB = 1067.1;
  int pontos = 50;
  float densidade = populacao / area;
  float PIBperCapita = PIB / populacao;

  // Carta 2
  char estado2 = 'B';
  char codigo2[] = "B02";
  char cidade2[] = "Rio de Janeiro";
  int populacao2 = 6730729;
  float area2 = 1200.33;
  float PIB2 = 418.46;
  int pontos2 = 30;
  float densidade2 = populacao2 / area2;
  float PIBperCapita2 = PIB2 / populacao2;
  
  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  // Carta 1
  printf("Carta 1: %c\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$ %.2f bilhões\n", PIB);
  printf("Pontos Turísticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade);
  printf("PIB per Capita: %.2f reais\n", PIBperCapita);

  // Carta 2
  printf("Carta 2: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f bilhões\n", PIB2);
  printf("Pontos Turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
return 0;
} 
