#include <stdio.h> // Biblioteca padrão para entrada e saída

int main(){

    printf("carta 1\n"); // Exibe o título "carta 1"

    // Declaração das variáveis da primeira carta
    char estado[3]; 
    char codigo_da_carta[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Entrada de dados para a primeira carta
    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("\n------------------\n"); // Separador visual

    printf("carta 2\n"); // Exibe o título "carta 2"

    // Declaração das variáveis da segunda carta
    char estado2[3];
    char codigo_da_carta2[20];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Entrada de dados para a segunda carta
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição dos dados da primeira carta
    printf("Carta 1\n");
    printf("estado: %s\n", estado);
    printf("codigo da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);

    // Exibição dos dados da segunda carta
    printf("Carta 2\n");
    printf("estado: %s\n", estado2);
    printf("codigo da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);

    return 0; // Finaliza o programa
}