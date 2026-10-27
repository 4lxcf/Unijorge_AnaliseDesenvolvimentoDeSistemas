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

    int op1, op2, lista[5], iC = 0, iG = 0;
    _Bool found = false;
    char cadNum;

    /*
        Método utilizado para cadastrar os novos números na lista. Foi utilizado o do-while porque era necessário a realização da primeira iteração e só depois checar se o usuário ainda deseja cadastrar mais numeros. A quantidade total de itens é registrada em iG e caso essa quantidade seja maior ou igual a 5, o limite de cadastro é atingido, não permitindo inserir mais números.
        Após inserir um número, o usuário deve responder se quer colocar outro respondendo com 's' ou 'n'.
    */
    void cadastrar(){
        do{
            system("cls");
            printf("Cadastre o %dº número: ", iG + 1);
            scanf("%d", &lista[iG]);
            iG++;
            if(iG >= 5){
                printf("Limite de cadastro atingido!\n");
                sleep(2);
                break;
            }
            printf("Deseja cadastrar outro número? (S/N): ");
            scanf(" %c", &cadNum);
        }while(iG < 5 && tolower(cadNum) == 's');
    }

    /*
        Método para consultar um número da lista que foi preenchida pelo usuário. op2 é a variável que armazena o valor a ser consultado e found é uma variável global que indica se o número consultado existe na lista ou não (true ou false). A busca roda utilizando um for e caso encontre o número, o iC (que é o indice de busca) guarda o indice da lista do número procurado. Nesse método colocamos como parâmetro a lista de números que deve ser buscada o valor desejado.
    */
    void consultar(int lista[]){
        op2 = 0;
        found = false;

        system("cls");
        printf("Digite o número que deseja consultar: ");
        scanf("%d", &op2);
        for(int i = 0; i < iG; i++){
            if(lista[i] == op2){
                found = true;
                printf("Número encontrado na posição %d!\n", i + 1);
                iC = i;
                break;
            }
        }
        if(!found){
            printf("Número não encontrado!\n");
        }
        sleep(2);
    }

    /*
        Este é o método de alterar um valor da lista. Dentro dele rodamos o método consulta, a fim de localizar o número que se deseja alterar, caso 'found' seja true, o número foi encontrado e então é pedido o valor do novo número. Caso não exista, acontece um print na tela informando que o número não foi encontrado. Nesse método colocamos como parâmetro a lista de números que deve ser buscada o valor desejado.
    */
    void alterar(int lista[]){
        consultar(lista);

        if (found == true){
            printf("Digite o novo número: ");
            scanf("%d", &lista[iC]);
            printf("Número alterado com sucesso!");
        } else {
            printf("Número não encontrado!\n");
        }

        sleep(2);
    }
    
    /*
        Método de impressão na tela. Ao rodar esse método todos os itens que estão na lista são mostrados na tela. Foi utilizado um for para isso.
    */
    void imprimir(){
        printf("Lista de números:\n");
        
        for(int i = 0; i < iG; i++){
            printf("Número %d: %d\n", i + 1, lista[i]);
        }

        sleep(3);
    }

    /*
        Método utilizado para organizar a lista em ordem crescente. Aqui foi utilizado uma variável chamada aux para armazenar o primeiro valor que gostaria de trocar de posição sem perdê-lo. Foi utilizado 2 estruturas de for para servir como ponteiros que indicam a posição dos itens que deverão ser trocados.
    */
    void organizarCrescente(){
        int aux;
        system("cls");

        for(int i = 0; i < iG; i++){
            for(int j = i + 1; j < iG; j++){
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

    /*
        Método utilizado para organizar a lista em ordem decrescente. Aqui também foi utilizado uma variável chamada aux para armazenar o primeiro valor que gostaria de trocar de posição sem perdê-lo. Foi utilizado 2 estruturas de for para servir como ponteiros que indicam a posição dos itens que deverão ser trocados.
    */
    void organizarDecrescente(){
        int aux;
        system("cls");

        for (int i = 0; i < iG; i++){
            for (int j = i + 1; j < iG; j++){
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

    /*
        Método utilizado para excluir algum item da lista. Na verdade, não existe uma exclusão real, o código faz uma sobreposição do valor que não é mais desejado "puxando" toda a lista para a frente. Nesse método também utilizamos o parâmetro da lista para rodar o método de consulta dentro do excluir.
    */
    void excluir(int lista[]){
        consultar(lista);

        if (found == true){
            iG--;
            for (int i = iC; i < iG; i++){
                lista[i] = lista[i + 1];
            }
            printf("Número excluído com sucesso!\n");
        } else {
            printf("Número não encontrado!\n");
        }

        sleep(2);
    }

    /*
        Método utilizado para modificar a cor do texto que será mostrado na tela. Foram disponibilizadas 7 cores e por esse método, utilizamos um switch que é determinado pelo usuário quando digita o valor que será armazenado em op2.
    */
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

    /*
        Método responsável por mostrar o Menu Principal do programa e mostrar a solicitação da opção desejada.
    */
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

    /*
        Método principal do programa. Aqui é que tudo de fato acontece. Foi utilizado o do-while também para estrutura de repetição, e em conjunto com o método 'menu', serve para o usuário escolher qual opção ele deseja fazer. A seleção é estruturada por meio de um switch que verifica o digitado na variável op1.
    */
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
                    excluir(lista);
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
