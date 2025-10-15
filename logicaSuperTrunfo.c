#include <stdio.h>

int main(){
    char estado1[3];   
    char carta1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int turisticos1;
    float densidade1;
    float percapita1;

    //ENTRADA DA CARTA 1.

    printf("\nCarta 1.\n\n");

    printf("Estado 1: \n");
    scanf(" %s", estado1);
    printf("Código 1: \n");
    scanf(" %s", carta1);
    printf("Nome da Cidade 1: \n");
    scanf(" %s", cidade1);
    printf("População 1: \n");
    scanf(" %d", &populacao1);
    printf("Área em km²: \n");
    scanf(" %f", &area1);
    printf("PIB 1: \n");
    scanf(" %f", &PIB1);
    printf("Pontos Turísticos: \n");
    scanf(" %d", &turisticos1);

    //calculos das cartas 1.

    densidade1 = populacao1 / area1;
    percapita1 = (PIB1 * 1000000000.0) / populacao1;

    //SAÍDA DA CARTA 1.

    printf("\nCarta 1.\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

//INF CARTA 2.

    char estado2[3];   //%c
    char carta2[4];   //%s
    char cidade2[50];   //%s
    int populacao2;   //%d
    float area2;   //%f
    float pib2;   //%f
    int turisticos2;   //%d
    float densidade2;   //%f
    float percapita2;   //%f

    //ENTRADA DA CARTA 2.

    printf("\nCarta 2.\n");

    printf("Estado 2: \n");
    scanf(" %s", estado2);
    printf("Código 2: \n");
    scanf(" %s", carta2);
    printf("Nome da Cidade 2: \n");
    scanf(" %s", cidade2);
    printf("População 2: \n");
    scanf(" %d", &populacao2);
    printf("Área em km² 2: \n");
    scanf(" %f", &area2);
    printf("PIB 2: \n");
    scanf(" %f", &pib2);
    printf("Pontos Turísticos 2: \n");
    scanf(" %d", &turisticos2);
    
    //calculos das cartas 2.

    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000.0) / populacao2;

    //SAÍDA DA CARTA 2.

    printf("\nCarta 2.\n");

    printf("Estado 2: %s\n", estado2);
    printf("Código 2: %s\n", carta2);
    printf("Nome da Cidade 2: %s\n", cidade2);
    printf("População 2: %d\n", populacao2);
    printf("Área 2: %.2f km²\n", area2);
    printf("PIB 2: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos 2: %d\n", turisticos2);
    printf("Densidade Populacional 2: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita 2: %.2f reais\n", percapita2);

    //COMPARAÇÕES DAS CARTAS.
    printf("\nComparação de Cartas (Atributo: População): \n");

    printf("Carta 1 (%s): %d habitantes\n", cidade1, populacao1);
    printf("Carta 2 (%s): %d habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}