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

    printf("Carta 1: %s\n", nomeCarta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTur);

    return 0;

}