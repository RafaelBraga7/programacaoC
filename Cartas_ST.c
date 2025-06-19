#include<stdio.h>

int main() {
    char nomeCarta[30] = "BRASIL";
    char estado[1];
    char codigoCarta[3];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int numPontosTur;

    char nomeCarta2[30] = "ALEMANHA";
    char estado2[1];
    char codigoCarta2[3];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTur2;



    printf("Carta1: %s\n",nomeCarta);

    printf("Informe uma letra entre A e H, representando um estado: \n");
    scanf("%s", &estado);

    printf("Informe a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &codigoCarta);

    printf("Informe o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Informe a área da cidade em KM²: \n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numPontosTur);

    printf("Carta1: %s\n",nomeCarta2);

    printf("Informe uma letra entre A e H, representando um estado: \n");
    scanf("%s", &estado2);

    printf("Informe a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &codigoCarta2);

    printf("Informe o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade em KM²: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numPontosTur2);

    printf("Carta 1: %s\n", nomeCarta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", numPontosTur);

    printf("Carta 2: %s\n", nomeCarta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTur2);

    return 0;

}
