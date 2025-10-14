#include <stdio.h>

int main(){
    char estado1;   
    char carta1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int turisticos1;
    float densidade1;
    float percapita1;

    // Entrada de dados (Carta 1)

    printf("\nDigite os dados da carta 1 (cadastro)\n");

    printf("Digite a letra de (A-H) para o estado da carta: ");
    scanf(" %c", &Estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf(" %s", &CodigoDaCarta1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &NomeDaCidade1);
    printf("Digite o número de habitantes da cidade (população): ");
    scanf(" %d", &Populacao1);
    printf("Digite a área da cidade em quilômetros quadrados (km²): ");
    scanf(" %f", &Areaemkm1);
    printf("Digite o Produto Interno Bruto da cidade (PIB): ");
    scanf(" %f", &PIB1);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf(" %d", &NumeroDePontosTuristicos1);

    // Cálculo da Densidade Populacional e PIB per Capita (Carta 1)

    DensidadePopulacional1 = Populacao1 / Areaemkm1;
    PIBperCapita1 = (PIB1 * 1000000000.0) / Populacao1;

    // Saída de dados (Carta 1)

    printf("\nCarta Super trunfo 1\n");

    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigoDaCarta1);
    printf("Nome da Cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Areaemkm1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

// Informações carta 2

    char Estado2;   //%c
    char CodigoDaCarta2[4];   //%s
    char NomeDaCidade2[50];   //%s
    int Populacao2;   //%d
    float Areaemkm2;   //%f
    float PIB2;   //%f
    int NumeroDePontosTuristicos2;   //%d
    float DensidadePopulacional2;   //%f
    float PIBperCapita2;   //%f

    // Entrada de dados (Carta 2)

    printf("\nDigite os dados da carta 2 (cadastro)\n");

   printf("Digite a letra de (A-H) para o estado da carta: ");
    scanf(" %c", &Estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf(" %s", &CodigoDaCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &NomeDaCidade2);
    printf("Digite o número de habitantes da cidade (população): ");
    scanf(" %d", &Populacao2);
    printf("Digite a área da cidade em quilômetros quadrados (km²): ");
    scanf(" %f", &Areaemkm2);
    printf("Digite o Produto Interno Bruto da cidade (PIB): ");
    scanf(" %f", &PIB2);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf(" %d", &NumeroDePontosTuristicos2);
    
    // Cálculo da Densidade Populacional e PIB per Capita (Carta 2)

    DensidadePopulacional2 = Populacao2 / Areaemkm2;
    PIBperCapita2 = (PIB2 * 1000000000.0) / Populacao2;

    // Saída de dados (Carta 2)

    printf("\nCarta Super trunfo 2\n");

    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigoDaCarta2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    // Comparações das Cartas
    printf("\nComparação de Cartas (Atributo: População): \n");

    printf("Carta 1 (%s): %d habitantes\n", NomeDaCidade1, Populacao1);
    printf("Carta 2 (%s): %d habitantes\n", NomeDaCidade2, Populacao2);

    if (Populacao1 > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomeDaCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", NomeDaCidade2);
    }

    return 0;
}