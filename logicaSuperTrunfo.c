#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1  = 'B'; // Letra de 'A' a 'H' (Representando um dos oito estados).
 
    char codigo1  [04] = "B04"; // Letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
 
    char cidade1  [20] = "Florianopolis"; //  Nome da cidade.
 
    int habitates1  = 1000; //  Número de habitantes da cidade.
 
    float area1  = 100; // Área da cidade em quilômetros quadrados.
 
    float pib1  = 10; // Produto Interno Bruto da cidade.
 
    int pontos_turisticos1 = 8; 

    float densidade_populacional1 = 1;

    float pib_per_capita2 = 8;



    char estado2 = 'A'; // letra de 'A' a 'H' (representando um dos oito estados).
 
    char codigo2 [02] = "A02"; // letra do estado seguida de um número de 01 a 04 (ex: A01, B02).
 
    char cidade2 [30] = "Joinville"; //  nome da cidade.
 
    int habitates2 = 1500; //  número de habitantes da cidade.
 
    float area2 = 400; // área da cidade em quilômetros quadrados.
 
    float pib2 = 300; // produto Interno Bruto da cidade.
 
    int pontos_turisticos2 = 6; 

    float densidade_populacional2 = 30; 

    float pib_per_capita2 = 70; 
    

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);

    printf("Digite uma letra referente ao estado da carta:\n");
    scanf("%c", &estado1);
    printf("Digite o código da carta:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade:\n");
    scanf("%d", &habitates1);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turisticos existem na cidade:\n\n");
    scanf("%d", &pontos_turisticos1);
    printf("Digite a densidade populacional:\n");
    scanf("%f", &densidade_populacional1);
    printf("Digite o PIB per capita:\n");
    scanf("%f", &pib_per_capita1);


    printf("Digite uma letra referente ao estado da carta:\n");
    scanf("%c", &estado2);
    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade:\n");
    scanf("%d", &habitates2);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos existem na cidade:\n");
    scanf("%d", &pontos_turisticos2);
    printf("Digite a densidade populacional:\n");
    scanf("%f", &densidade_populacional2);
    printf("Digite o PIB per capita:\n");
    scanf("%f", &pib_per_capita2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;

}


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", habitates1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB:R$ %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", habitates2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB:R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",pontos_turisticos2);



    return 0;
}
