#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado[3];
    char nomeDaCidade[20];
    char codigoDaCidade[20];
    int populacao;
    float PIB;
    float area;
    int numerosDePontosTuristicos;
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite a siglas do estado: \n");
    scanf("%2s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%19s", &nomeDaCidade);

    printf("Digite o codigo da cidade: \n");
    scanf("%19s", &codigoDaCidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a area por Km²: \n");
    scanf("%f", &area);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numerosDePontosTuristicos);

    

    

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Nome do Estado: %s\n", estado);
    printf("Nome da cidade: %s\n", nomeDaCidade);
    printf("Código da cidade: %s\n", codigoDaCidade);
    printf("População: %d\n", populacao);
    printf("PIB: %.2f\n", PIB);
    printf("Area: %.2f\n", area);
    printf("Numero de Pontos Turisticos: %d\n", numerosDePontosTuristicos);

    return 0;
}
