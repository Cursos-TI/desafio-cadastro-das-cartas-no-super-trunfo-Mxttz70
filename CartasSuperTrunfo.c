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

float calcular_densidade(int populacao, float area){
    return populacao / area;
}

float calcular_pib_per_capita(float pib, int populacao){
    return (pib * 1000000000) / populacao;
}

float calcular_super_poder(struct cidade cidade) {
    float densidade = calcular_densidade(cidade.populacao, cidade.area);
    float pib_per_capita = calcular_pib_per_capita(cidade.pib, cidade.populacao);
    return cidade.populacao + cidade.area + cidade.pib +cidade.pontos_turisticos + pib_per_capita + (1 / densidade);
}


int main(){

    struct cidade cidade1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    struct cidade cidade2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};

    float densidade1 = cidade1.populacao / cidade1.area;
    float densidade2 = cidade2.populacao / cidade2.area;
    float pib_per_capita1 = (cidade1.pib * 1000000000) / cidade1.populacao;
    float pib_per_capita2 = (cidade2.pib * 1000000000) / cidade2.populacao;

    float super_poder1 = calcular_super_poder(cidade1);
    float super_poder2 = calcular_super_poder(cidade2);

    printf("Carta 1: \n");
    printf("Estado: %c\n", cidade1.estado);
    printf("Código: %s\n", cidade1.codigo);
    printf("Nome da Cidade: %s\n", cidade1.nome);
    printf("População: %i\n", cidade1.populacao);
    printf("Área: %.2f quilômetros quadrados \n", cidade1.area);
    printf("PIB: %.2f bilhões de reais \n", cidade1.pib);
    printf("Número de pontos Turísticos: %d\n", cidade1.pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes por quilômetro quadrado\n", densidade1);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita1);
    printf("Super poder: %.2f\n\n", super_poder1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", cidade2.estado);
    printf("Código: %s\n", cidade2.codigo);
    printf("Nome da Cidade: %s\n", cidade2.nome);
    printf("População: %i\n", cidade2.populacao);
    printf("Área: %.2f quilômetros quadrados \n", cidade2.area);
    printf("PIB: %.2f bilhões de reais \n", cidade2.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade2.pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes por quilômetro quadrado\n", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita2);
    printf("Super poder: %.2f\n\n", super_poder2);

    printf("Comparação entre as cartas: \n");
    printf("População: %s (Carta 1: %d, Carta 2: %d)\n",cidade1.populacao > cidade2.populacao ? "Carta 1 venceu" : "Carta 2 venceu", cidade1.populacao, cidade2.populacao);
    printf("Àrea : %s (Carta 1: %.2f km², Carta 2: %.2f km²)\n", cidade1.area > cidade2.area ? "Carta 1 venceu" : "Carta 2 venceu", cidade1.area, cidade2.area);
    printf("PIB: %s (Carta 1: %.2f bi, Carta 2: %.2f bi)", cidade1.pib > cidade2.pib ? "Carta 1 venceu" : "Carta 2 venceu", cidade1.pib, cidade2.pib);
    printf("Número de pontos turísticos: %s (Carta 1: %d, Carta 2: %d)\n", cidade1.pontos_turisticos > cidade2.pontos_turisticos ? "Carta 1 venceu" : "Carta 2 venceu", cidade1.pontos_turisticos, cidade2.pontos_turisticos);
    printf("Densidade Populacional: %s (Carta 1: %.2f, Carta 2: %.2f)\n", densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu", densidade1, densidade2);
    printf("PIB per capita: %s (Carta 1: %.2f R$, Carta 2: %.2f R$)\n", pib_per_capita1 > pib_per_capita2 ? "Carta 1 venceu" : "Carta 2 venceu", pib_per_capita1, pib_per_capita2);
    printf("Super poder: %s (Carta 1: .%2f, Carta 2: %.2f)\n\n", super_poder1 > super_poder2 ? "Carta 1 venceu" : "Carta 2 venceu", super_poder1, super_poder2);



    return 0;

}











