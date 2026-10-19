#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <ctype.h>

/*
Principais códigos ANSI de cores para o terminal:
- Reset: \033[0m
- Vermelho: \033[1;31m
- Verde: \033[1;32m
- Amarelo: \033[1;33m
- Azul: \033[1;34m
- Roxo: \033[1;35m
- Ciano: \033[1;36m
*/

int op1;
int op2;

void cor(){
    printf("********************************\n");
    printf("*  0 - RESET                   *\n");
    printf("*  1 - VERMELHO                *\n");
    printf("*  2 - VERDE                   *\n");
    printf("*  3 - AMARELO                 *\n");
    printf("*  4 - AZUL                    *\n");
    printf("*  5 - ROXO                    *\n");
    printf("*  6 - CIANO                   *\n");
    printf("********************************\n");
    printf("ESCOLHA A COR: ");
    scanf("%d", &op2);
    system("cls");
    switch(op2){
        case 0:
            printf("\033[0m");
            break;
        case 1:
            printf("\033[1;31m");
            break;
        case 2:
            printf("\033[1;32m");
            break;
        case 3:
            printf("\033[1;33m");
            break;
        case 4:
            printf("\033[1;34m");
            break;
        case 5:
            printf("\033[1;35m");
            break;
        case 6:
            printf("\033[1;36m");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

void menu() {
    printf("********************************\n");
    printf("*  MENU PRINCIPAL              *\n");
    printf("********************************\n");
    printf("*  1 - CADASTRAR               *\n");
    printf("*  2 - CONSULTAR               *\n");
    printf("*  3 - ALTERAR                 *\n");
    printf("*  4 - ORGANIZAR CRESCENTE     *\n");
    printf("*  5 - ORGANIZAR DECRESCENTE   *\n");
    printf("*  6 - EXCLUIR                 *\n");
    printf("*  7 - ALTERAR COR             *\n");
    printf("*  8 - FINALIZAR               *\n");
    printf("********************************\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");

}

void main(){
    setlocale(LC_ALL, "Portuguese");
    do{
        menu();
        scanf("%d", &op1);
        system("cls");
        switch(op1){
            case 1:   
            case 2:
            case 3:  
            case 4:  
            case 5:  
            case 6:   
            case 7:
                cor();
                break;
            case 8:
                printf("FINALIZANDO...\n");
                break;
            default:
                printf("Opção inválida!\n");
                sleep(3);
                system("cls");
        }
    }while(op1 != 8);
}
