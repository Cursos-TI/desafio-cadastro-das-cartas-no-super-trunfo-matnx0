#include <stdio.h>


/*----------------------- Super Trunfo - Nível Novato -----------------------
Objetivo: Cadastrar e Exibir 2 Cartas de Cidades*/


// A função main é o ponto de entrada do programa.
int main() {

    // Declaração das variáveis para a primeira carta.
    // "int" para números inteiros (população e pontos turísticos).
    int populacao_carta1;
    int pontos_turisticos_carta1;

    // "float" para números com casas decimais (área e PIB).
    float area_carta1;
    float pib_carta1;

    // Declaração das variáveis para a segunda carta.
    int populacao_carta2;
    int pontos_turisticos_carta2;
    float area_carta2;
    float pib_carta2;

    // Solicita ao usuário que insira os dados para a primeira carta.
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Digite a populacao: ");

    // "scanf" lê o valor digitado pelo usuário e armazena na variável.
    // O "%d" é um especificador de formato para inteiros.
    // O "&"" é o operador de endereço, necessário para o scanf.
    scanf("%d", &populacao_carta1);

    printf("Digite a area: ");
    // O "%f" é um especificador de formato para float.
    scanf("%f", &area_carta1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_carta1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // Solicita ao usuário que insira os dados para a segunda carta.
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao_carta2);

    printf("Digite a area: ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_carta2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Exibe os dados da primeira carta.
    printf("\n--- Dados da Primeira Carta ---\n");

    // O "printf" exibe a mensagem e o valor da variável.
    printf("Populacao: %d\n", populacao_carta1);

    // O "\n" insere uma quebra de linha para organizar a saída.
    printf("Area: %.2f km2\n", area_carta1);
    
    // O "%.2f" formata o float para exibir apenas duas casas decimais.
    printf("PIB: %.2f trilhoes\n", pib_carta1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_carta1);

    // Exibe os dados da segunda carta.
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km2\n", area_carta2);
    printf("PIB: %.2f trilhoes\n", pib_carta2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_carta2);

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
