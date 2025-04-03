#include <stdio.h>

int main() {
    // Alteração para acionar o workflow
    // Variáveis para a Carta 1
    char estado1;                      // Ex: sigla do estado
    char codigo1[4];                   // Código da carta (máximo 3 caracteres + '\0')
    char nomeCidade1[100];             // Nome da cidade
    unsigned long int populacao1;      // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;      // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf(" %s", codigo1);
    // O %[^\n] lê uma linha inteira (até o Enter)
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);  // %lu para unsigned long int
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
      
    // Cálculos para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;  // Conversão para float
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1; // PIB em reais (convertendo bilhões)
    // Cálculo do Super Poder: soma de todos os atributos numéricos + inverso da densidade
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 
                  + pibPerCapita1 + (1.0f / densidadePopulacional1);
                  
    // Exibição dos dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 
                  + pibPerCapita2 + (1.0f / densidadePopulacional2);
    
    // Exibição dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    // Comparações entre as Cartas:
    // Para população, área, PIB, pontos turísticos, PIB per capita e Super Poder: vence o maior.
    // Para densidade populacional: vence o menor.
    
    printf("\n--- Comparacao de Cartas ---\n");
    
    // Comparação de População
    if ((float)populacao1 >= (float)populacao2)
        printf("Populacao: Carta 1 venceu (1)\n");
    else
        printf("Populacao: Carta 2 venceu (0)\n");
        
    // Comparação de Área
    if (area1 >= area2)
        printf("Area: Carta 1 venceu (1)\n");
    else
        printf("Area: Carta 2 venceu (0)\n");
        
    // Comparação de PIB
    if (pib1 >= pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");
        
    // Comparação de Pontos Turisticos
    if (pontosTuristicos1 >= pontosTuristicos2)
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
        
    // Comparação de Densidade Populacional (menor vence)
    if (densidadePopulacional1 <= densidadePopulacional2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
        
    // Comparação de PIB per Capita
    if (pibPerCapita1 >= pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");
        
    // Comparação de Super Poder
    if (superPoder1 >= superPoder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");
    
    return 0;
}
