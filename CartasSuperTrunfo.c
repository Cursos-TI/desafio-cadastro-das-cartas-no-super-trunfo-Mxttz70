#include <stdio.h>

struct cidade{

    char estado;
    char codigo [4];
    char nome [30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

};

int main(){

    struct cidade cidade1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    struct cidade cidade2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};
     
    printf("Carta 1: \n");
    printf("Estado: %c\n", cidade1.estado);
    printf("Código: %s\n", cidade1.codigo);
    printf("Nome da Cidade: %s\n", cidade1.nome);
    printf("População: %i\n", cidade1.populacao);
    printf("Área: %.2f quilômetros quadrados \n", cidade1.area);
    printf("PIB: %.2f bilhões de reais \n", cidade1.pib);
    printf("Número de pontos Turísticos: %d\n\n", cidade1.pontos_turisticos);

    printf("Carta 2: \n");
    printf("Estado: %c\n", cidade2.estado);
    printf("Código: %s\n", cidade2.codigo);
    printf("Nome da Cidade: %s\n", cidade2.nome);
    printf("População: %i\n", cidade2.populacao);
    printf("Área: %.2f quilômetros quadrados \n", cidade2.area);
    printf("PIB: %.2f bilhões de reais \n", cidade2.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade2.pontos_turisticos);

    return 0;

}











