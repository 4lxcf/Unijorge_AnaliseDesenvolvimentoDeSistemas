    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
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

    int op1, op2, lista[5], qtdCad, cad = 0, pos;
    _Bool found = false;
    char cadNum;

    void cadastrar(){
        do{
            system("cls");
            printf("Cadastre o %dº número: ", qtdCad + 1);
            scanf("%d", &lista[qtdCad]);
            qtdCad ++;
            if(qtdCad >=5){
                printf("Limite de cadastro atingido!\n");
                sleep(3);
                break;
            }
            printf("Deseja cadastrar outro número? (S/N): ");
            scanf(" %c", &cadNum);
        }while(qtdCad < 5 && tolower(cadNum) == 's');
    }

    void consultar(int lista[]){
        op2 = 0;
        system("cls");
        printf("Digite o número que deseja consultar: ");
        scanf("%d", &op2);
        found = false;
        for(int i = 0; i < 5; i++){
            if(lista[i] == op2){
                printf("Número encontrado na posição %d!\n", i + 1);
                found = true;
                pos = i;
                break;
            }
        }
        if(!found){
            printf("Número não encontrado!\n");
        }
        sleep(3);
    }

    void alterar(int lista[]){
        op2 = 0;
        found = false;

        consultar(lista);

        if (found == true){
            printf("Digite o novo número: ");
            scanf("%d", &lista[pos]);
            printf("Número alterado com sucesso!");
        } else {
            printf("Número não encontrado!\n");
        }

        sleep(3);
    }
    
    void imprimir(){
        printf("Lista de números:\n");
        
        for(int i = 0; i < 5; i++){
            printf("Número %d: %d\n", i + 1, lista[i]);
        }

        sleep(5);
    }
    // Implementar lógica para organizar em ordem crescente
    void organizarCrescente(){
        int aux;
        system("cls");

        for(int i = 0; i < 5; i++){
            for(int j = i + 1; j < 5; j++){
                if(lista[i] > lista[j]){
                    aux = lista[i];
                    lista[i] = lista[j];
                    lista[j] = aux;
                }
            }
        }

        imprimir();
        sleep(2);
    }

    // Implementar lógica para organizar em ordem decrescente
    void organizarDecrescente(){
        int aux;
        system("cls");

        for (int i = 0; i < 5; i++){
            for (int j = i + 1; j < 5; j++){
                if (lista[i] < lista[j]){
                    aux = lista[i];
                    lista[i] = lista[j];
                    lista[j] = aux;
                }
            }
        }

        imprimir();
        sleep(2);
    }

    void excluir(){}


    void alterarCor(){
        op2 = 0;
        system("cls");
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
        system("cls");
        printf("********************************\n");
        printf("*  MENU PRINCIPAL              *\n");
        printf("********************************\n");
        printf("*  1 - CADASTRAR               *\n");
        printf("*  2 - CONSULTAR               *\n");
        printf("*  3 - ALTERAR                 *\n");
        printf("*  4 - ORGANIZAR CRESCENTE     *\n");
        printf("*  5 - ORGANIZAR DECRESCENTE   *\n");
        printf("*  6 - EXCLUIR                 *\n");
        printf("*  7 - IMPRIMIR                *\n");
        printf("*  8 - ALTERAR COR             *\n");
        printf("*  9 - FINALIZAR               *\n");
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
                    cadastrar();
                    break;
                case 2:
                    consultar(lista);
                    break;
                case 3:
                    alterar(lista);
                    break;
                case 4:
                    organizarCrescente();
                    break;
                case 5:
                    organizarDecrescente();
                    break;
                case 6:
                    excluir();
                    break;
                case 7:
                    imprimir();
                    break;
                case 8:
                    alterarCor();
                    break;
                case 9:
                    printf("FINALIZANDO...\n");
                    break;
                default:
                    printf("Opção inválida!\n");
                    sleep(3);
                    system("cls");
            }
        }while(op1 != 9);
    }
