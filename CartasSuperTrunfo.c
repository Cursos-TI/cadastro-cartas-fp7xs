#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50];
  char codigo[50];
  char nome[30];
  int populacao, pontos;
  char area;
  float pib;

  char estado2[50];
  char codigo2[50];
  char nome2[50];
  int populacao2, pontos2;
  char area2;
  float pib2;
  
  // Área para entrada de dados
  printf("Carta 1\n");

  printf("Digite o nome do estado:");
  scanf("%s", estado);

  printf("Digite o nome da cidade:");
  scanf("%s", nome);

  printf("Digite o codigo do estado:");
  scanf("%s", codigo);

  printf("Digite a população do estado:");
  scanf("%s", &populacao);
  
  printf("Digite a área do estado:");
  scanf("%s", &area);

  printf("Digite o pib do estado:");
  scanf("%s", &pib);

  printf("Digite os pontos do estado:");
  scanf("%s", &pontos);
  
  printf("Carta 2\n");

  printf("Digite o nome do estado:");
  scanf("%s", estado2);

  printf("Digite o nome da cidade:");
  scanf("%s", nome2);

  printf("Digite o codigo do estado:");
  scanf("%s", codigo2);

  printf("Digite a população do estado:");
  scanf("%s", &populacao2);
  
  printf("Digite a área do estado:");
  scanf("%s", &area2);

  printf("Digite o pib do estado:");
  scanf("%s", &pib2);

  printf("Digite os pontos do estado:");
  scanf("%s", &pontos2);


  // Área para exibição dos dados da cidade

return 0; 


} 
