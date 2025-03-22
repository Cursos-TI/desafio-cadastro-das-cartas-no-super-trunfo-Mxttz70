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

    int escolha;
    do {
        printf("\nEscolha um atributo para comparar: \n");
        printf("1 - população\n");
        printf("2 - Àrea\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade populacional (menor vence)\n");
        printf("6 - PIB per capita\n");
        printf("7 - Super Poder\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("População: %s (Carta 1: %d, Carta 2: %d)\n", cidade1.populacao > cidade2.populacao ? "Carta 1 venceu" : "Carta 2 venceu", cidade1.populacao, cidade2.populacao);
            break;
        case 2:
            printf("Área: %s (Carta 1: %.2f km², Carta 2: %.2f km²)\n", cidade1.area > cidade2.area ? "Carta 1 venceu" : "Carta 2 venceu", cidade1.area, cidade2.area);
            break;
        case 3: 
            printf("PIB: %s (Carta 1: %.2f bi, Carta 2: %.2f bi)\n", cidade1.pib > cidade2.pib ? "Carta 1 venceu" : "Carta 2 venceu", cidade1.pib, cidade2.pib);
            break;
        case 4:
            printf("Números de pontos turísticos: %s (carta 1: %d, Carta 2: %d)\n", cidade1.pontos_turisticos > cidade2.pontos_turisticos ? "Carta 1 venceu" : "Carta 2 venceu", cidade1.pontos_turisticos, cidade2.pontos_turisticos);
            break;
        case 5:
            printf("Densidade populacional: %s (Carta 1: %.2f, Carta 2: %.2f)\n", densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu", densidade1, densidade2);
            break;
        case 6: 
            printf("PIB per capita: %s (Carta 1: R$ %.2f, Carta 2: R$ %.2f)\n", pib_per_capita1 > pib_per_capita2 ? "Carta  1 venceu" : "Carta 2 venceu", pib_per_capita1, pib_per_capita2);
            break;
        case 7:
        printf("Super poder: %s (Carta 1: %.2f, Carta 2: %.2f)\n", super_poder1 > super_poder2 ? "Carta 1 venceu" : "Carta 2 venceu", super_poder1, super_poder2);
        break;
        case 0: 
        printf("Saindo...\n");
        break;

        default:
        printf("opção inválida!! Tente novamente.\n");
            break;
        }

    }while (escolha != 0);
    



    return 0;

}











