#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    
    char estado_1 ;
    char codigo_1[3];
    char cidade_1[100];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    unsigned int pontos_turisticos_1;
    float densidade_1; // populacao / area
    float pib_p_capta_1; // pib / populacao

    char estado_2;
    char codigo_2[3];
    char cidade_2[100];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    unsigned int pontos_turisticos_2;
    float densidade_2; // populacao / area
    float pib_p_capta_2; // pib / populacao


    
    printf("Bem vindo ao Super Trunfo\n");
    printf("Vamos iniciar cadastrando as informação das cartas disponíveis\n");
    printf("Cada carta representa uma cidade diferente\n");
    printf("Vamos começar, digite as informações da primeira cidade!\n");
    printf("Qual o nome da cidade?\n");
    scanf("%s", &cidade_1);
    printf("Qual a primeira letra do Estado/UF desta cidade?\n");
    scanf("%c", &estado_1);
    printf("Quantos habitantes residem nesta cidade?\n");
    scanf("%d", &populacao_1);
    printf("Qual a àrea territorial desta cidade?\n");
    scanf("%d", &area_1);
    printf("Qual o PIB da cidade?\n");
    scanf("%d", &pib_1);
    printf("Quantos pontos turísticos essa cidade tem?\n");
    scanf("%d", &pontos_turisticos_1);

    printf("Pronto, a primeira cidade foi cadastrada\n");
    printf("Agora vamos cadastras a segunda cidade!\n");
    printf("Qual o nome da cidade?\n");
    scanf("%s", &cidade_2);
    printf("Qual a primeira letra do Estado/UF desta cidade?\n");
    scanf("%c", &estado_2);
    printf("Quantos habitantes residem nesta cidade?\n");
    scanf("%d", &populacao_2);
    printf("Qual a àrea territorial desta cidade?\n");
    scanf("%d", &area_2);
    printf("Qual o PIB da cidade?\n");
    scanf("%d", &pib_2);
    printf("Quantos pontos turísticos essa cidade tem?\n");
    scanf("%d", &pontos_turisticos_2);
    printf("Pronto, a segunda cidade foi cadastrada\n");
    printf("Vou fazer as comparações e te mostrar quem ganhou em cada \n");

    printf("Cartas Cadastradas:\n");

    printf("Estado: %c", estado_1);
    printf("Código da Carta: %s", codigo_1);
    printf("Código da Carta: %s", codigo_1);

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);






//     Estado: A
// Código da Carta: A01
// Nome da Cidade: São Paulo
// População: 12325000
// Área: 1521.11 km²
// Densidade Populacional: 8101.19 pessoas/km²
// PIB: 699.28 bilhões de reais
// PIB per Capita: 56749 reais
// Número de Pontos Turísticos: 50
    return 0;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
}
