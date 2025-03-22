#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;
    int ataq1, ataq2, def1, def2, rec1, rec2;

    srand(time(0));
    ataq1 = 1;
    ataq2 = 0;
    def1 = 1;
    def2 = 0;
    rec1 = 1;
    rec2 = 0;

    printf("Bem vindo ao game!!\n");
    printf("Faça sua primeira escolha: \n");
    printf("A. Ataque.\n");
    printf("D. Defesa.\n");
    printf("R. Recuo.\n");

    printf("Faça sua escolha: ");
    scanf("%c", &primeiroatributo);

    switch (primeiroatributo)
    {
    case 'A':
    case 'a':
             printf("Você escolheu atacar!!\n");
             resultado1 = ataq1 > ataq2 ? 1 : 0;
    break;

    case 'D':
    case 'd':
             printf("Você escolheu se defender!!\n");
             resultado1 = def1 > def2 ? 1 : 0;
             break;
    case 'R':
    case 'r':
            printf("Você recuo!!\n");
            resultado1 = rec1 > rec2 ? 1 : 0;
            break;
    
    default:
    printf("Essa opção não existe...");
        break;
    }

    printf("Faça sua segunda escolha\n");
    printf("Lembrando que a segunda escolha é diferente da primeira!!\n");
    printf("A. Ataque.\n");
    printf("D. Defesa.\n");
    printf("R. Recuo.\n");

    printf("Faça sua escolha: ");
    scanf(" %c", &segundoatributo);

    if(primeiroatributo == segundoatributo){
        printf("Você fez a mesma escolha...\n");
    } else {
        switch (segundoatributo)
        {
        case 'A':
        case 'a':
                 printf("Você escolheu atacar!!\n");
                 resultado2 = ataq1 > ataq2 ? 1 : 0;
        break;
    
        case 'D':
        case 'd':
                 printf("Você escolheu se defender!!\n");
                 resultado2 = def1 > def2 ? 1 : 0;
                 break;
        case 'R':
        case 'r':
                printf("Você recuo!!\n");
                resultado2 = rec1 > rec2 ? 1 : 0;
                break;
        
        default:
        printf("Essa opção não existe...");
            break;
        }
        
    }

    if (resultado1 && resultado2){
        printf("Parabéns Jogo ganho\n");

    } else if (resultado1 != resultado2){
        printf("Empate!!\n");

    }else {
        printf("Game Over!!!!\n");
    }

    return 0;
}














