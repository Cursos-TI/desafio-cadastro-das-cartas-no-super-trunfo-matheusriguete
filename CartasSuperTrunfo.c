#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float percapita1;
    float superpoder1; 
    float inverso1;

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
   unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float percapita2;
    float superpoder2;
    float inverso2;
    
//%d: Imprime um inteiro no formato decimal.
 
//%i: Equivalente a %d.
 
//%f: Imprime um número de ponto flutuante no formato padrão.
 
//%e: Imprime um número de ponto flutuante na notação científica.
 
//%c: Imprime um único caractere.
 
//%s: Imprime uma cadeia (string) de caracteres


    printf("Super trunfo \n");
   
   
    printf("Carta 1: \n");
   

    printf("Digite o Estado:\n");

    scanf("%s" , &estado1);

    printf("Digite o Código da carta\n");

    scanf("%s" , &codigo1);

    printf("Digite o nome da cidade:\n");

    scanf("%s" , &cidade1);

    printf("Digite a População:\n");

    scanf("%u" , &populacao1);

    printf("Digite a Área:\n");

    scanf("%f" , &area1);

    printf("Digite o PIB:\n");

    scanf("%f" , &pib1);

    printf("Digite o Numero de pontos Turísticos:\n");

    scanf("%d" , &pontos1);

    





    

    printf("Dados da carta 1 salvos com Sucesso! \n");

    printf("Carta 2: \n");


    printf("Digite o Estado:\n");

    scanf("%s" , &estado2);

    printf("Digite o Código da carta\n");

    scanf("%s" , &codigo2);

    printf("Digite o nome da cidade:\n");

    scanf("%s" , &cidade2);

    printf("Digite a População:\n");

    scanf("%u" , &populacao2);

    printf("Digite a Área:\n");

    scanf("%f" , &area2);

    printf("Digite o PIB:\n");

    scanf("%f" , &pib2);

    printf("Digite o Numero de pontos Turísticos:\n");

    scanf("%d" , &pontos2);

    printf("Dados da carta 2 salvos com Sucesso!\n");

//Dividi as variaveis e coloquei uma para cada carta.


    printf("Carta 1: \n");

    printf("-Estado: %s \n-Código da carta: %d \n" , estado1, codigo1);

    printf("-Nome da Cidade: %s \n-População: %u \n" , cidade1, populacao1);

    printf("-Área: %.2f km² \n-PIB: %.2f bilhões de reais \n-Pontos turísticos: %d \n" , area1, pib1, pontos1);
   densidade1 = (populacao1 / area1);
    printf("-Densidade Populacional: %.2f hab/km² \n", densidade1);
    percapita1= (pib1 / populacao1);
    printf("-PIB per Capita: %.2f Reais \n", percapita1);
    inverso1= (1 / densidade1);
    superpoder1 = (inverso1 + populacao1 + area1 + pib1 + percapita1 + pontos1 );
    printf("-Super Poder: %.2f \n", superpoder1);



    printf("Carta 2: \n");

    printf("-Estado: %s \n-Código da carta: %d \n" , estado2, codigo2);

    printf("-Nome da Cidade: %s \n-População: %u \n" , cidade2, populacao2);

    printf("-Área: %.2f km² \n-PIB: %.2f bilhões de reais\n-Pontos turísticos: %d \n" , area2, pib2, pontos2);
    densidade2 = (populacao2 / area2);
    printf("-Densidade Populacional: %.2f hab/km² \n", densidade2);
    percapita2 = (pib2 / populacao2);
    printf("-PIB per Capita: %.2f Reais \n", percapita2);
    inverso2= (1 / densidade2);
    superpoder2 = ( inverso2 + populacao2 + area2 + pib2 + percapita2 + pontos2);
    printf("-Super Poder: %.2f \n", superpoder2);

    printf("Comparação de Cartas: \n");
    printf("População: Resultado (%d) \n", populacao1 > populacao2);
    printf("Área: Resultado (%d) \n", area1 > area2);
    printf("PIB: Resultado (%d) \n", pib1 > pib2);
    printf("Pontos Turísticos: Resultado (%d) \n", pontos1 > pontos2);
    printf("Densidade Populacional: Resultado (%d) \n", densidade1 < densidade2);
    printf("PIB per Capita: Resultado (%d) \n", percapita1 > percapita2);
    printf("Super Poder: Resultado (%d) \n", superpoder1 > superpoder2);


    






   

    return 0;
}


   
