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
    printf("Digite a população: ");

    // "scanf" lê o valor digitado pelo usuário e armazena na variável.
    // O "%d" é um especificador de formato para inteiros.
    // O "&"" é o operador de endereço, necessário para o scanf.
    scanf("%d", &populacao_carta1);

    printf("Digite a área: ");
    // O "%f" é um especificador de formato para float.
    scanf("%f", &area_carta1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_carta1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // Solicita ao usuário que insira os dados para a segunda carta.
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Digite a população: ");
    scanf("%d", &populacao_carta2);

    printf("Digite a área: ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_carta2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Exibe os dados da primeira carta.
    printf("\n--- Dados da Primeira Carta ---\n");

    // O "printf" exibe a mensagem e o valor da variável.
    printf("População: %d\n", populacao_carta1);

    // O "\n" insere uma quebra de linha para organizar a saída.
    printf("Área: %.2f km2\n", area_carta1);
    
    // O "%.2f" formata o float para exibir apenas duas casas decimais.
    printf("PIB: %.2f trilhões\n", pib_carta1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_carta1);

    // Exibe os dados da segunda carta.
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f km2\n", area_carta2);
    printf("PIB: %.2f trilhões\n", pib_carta2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_carta2);

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
