#include <stdio.h>

int main(){
    int populacao1, populacao2;
    float pib1, pib2;
    float area1, area2;
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[25], cidade2[25];
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;


    printf("Digite um estado com uma letra de A-H:\n");
    scanf(" %c", &estado1);

    printf("Digite um codigo para a sua cidade com a letra do estado  seguida de um numero de 01-04:\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da sua cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao da sua cidade:\n");
    scanf(" %d", &populacao1);

    printf("Digite a area da sua cidade:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da sua cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turisticos da sua cidade:\n");
    scanf(" %d", &pontos1);

    // Calculando a densidade populacional
    densidade1 = (float)populacao1 / area1;
    // Calculando o PIB per capita
    pib_per_capita1 = pib1 / populacao1;



    printf("Digite um estado com uma letra de A-H:\n");
    scanf(" %c", &estado2);

    printf("Digite um codigo para a sua cidade com a letra do estado  seguida de um numero de 01-04:\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da sua cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao da sua cidade:\n");
    scanf(" %d", &populacao2);

    printf("Digite a area da sua cidade:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da sua cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turisticos da sua cidade:\n");
    scanf(" %d", &pontos2);

    // Calculando a densidade populacional
    densidade2 = (float)populacao2 / area2;
    // Calculando o PIB per capita
    pib_per_capita2 = pib2 / populacao2;

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
    
}
