#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

//const int max=50;
#define max 50

struct aluno{
    int matricula;
    char nomeAluno[50];
    char curso[30];
    char turno[20];
};


struct aluno tbAluno[max];
struct aluno a;

int opc=0, op=0, lista[5], idc=0, idg=0, n;
_Bool enc;
char con='s';

/*
Principais códigos ANSI:

\033[0m → reset
\033[1;31m → vermelho
\033[1;32m → verde
\033[1;33m → amarelo
\033[1;34m → azul
\033[1;35m → roxo
\033[1;36m → ciano
*/ 

void cadastrar(){
    if(idg<max){
        system("clear");
        a.matricula++;
        printf("Matricula do Aluno: %d\n",a.matricula);
        printf("Nome do Aluno: ");
        getchar();
        fgets(a.nomeAluno,sizeof(a.nomeAluno),stdin);
        a.nomeAluno[strcspn(a.nomeAluno,"\n")] ='\0';
        printf("Curso do Aluno: ");
        getchar();
        fgets(a.curso,sizeof(a.curso),stdin);
        a.curso[strcspn(a.curso,"\n")] ='\0';
        printf("Turno do Aluno: ");
        scanf("%s",a.turno);
        tbAluno[idg]=a;
        idg++;
    }else{
        printf("Tabela cheia!\n");
        sleep(3);
    }
}

_Bool consultar(int mat){
    idc=0;
    enc=false;
    while( (idc<idg) && (enc==false) ){
        if(tbAluno[idc].matricula==mat){
            enc=true;
        }else{
            idc++;
        }
    }
    return enc;
}

void excluir(int id){
    idg--;
    for(int i=id;i<idg;i++){
        lista[i]=lista[i+1];
    }
}

void imprimir(){
    printf("Lista de números\n");
    for(int i=0;i<idg;i++){
       printf("%d\n",lista[i]);
    }
    sleep(5);  
}

void cor(){
    system("clear");
    printf("************************\n");
    printf("* 0 - Reset            *\n");
    printf("* 1 - Vermelho         *\n");
    printf("* 2 - Verde            *\n");
    printf("* 3 - Amarelo          *\n");
    printf("* 4 - Azul             *\n");
    printf("* 5 - Roxo             *\n");
    printf("* 6 - Ciano            *\n");
    printf("************************\n");
    printf("Escolha a cor: ");
    scanf("%d",&opc);
    system("clear");
    switch(opc){
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
            printf("Opção inválida!");
            break;
    }
}

void menu(){
    system("clear");
    printf("*********************************\n");
    printf("*         MENU PRINCIPAL        *\n");
    printf("*********************************\n");
    printf("*  1 - CADASTRAR                *\n");
    printf("*  2 - CONSULTAR                *\n");
    printf("*  3 - ALTERAR                  *\n");
    printf("*  4 - ORGANIZAR CRESCENTE      *\n");
    printf("*  5 - ORGANIZAR DECRESCENTE    *\n");
    printf("*  6 - EXCLUIR                  *\n");
    printf("*  7 - IMPRIMIR                 *\n");
    printf("*  8 - COR                      *\n");
    printf("*  9 - FINALIZAR                *\n");
    printf("*********************************\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
}

void orgcrescente(){
    int aux;
    for (int x=0;x<4;x++){
        for(int y=x+1;y<5;y++){
            if (lista[x]>lista[y]){
                aux=lista[x];
                lista[x]=lista[y];
                lista[y]=aux;
            }
        }
    }
}

void orgdecrescente(){
    int aux;
    for (int x=0;x<4;x++){
        for(int y=x+1;y<5;y++){
            if (lista[x]<lista[y]){
                aux=lista[x];
                lista[x]=lista[y];
                lista[y]=aux;
            }
        }
    }
}

void main()
{
    setlocale(LC_ALL,"");
    do{
        menu();
        scanf("%d",&op);
        system("clear");
        switch(op){
        case 1:
            do{
                cadastrar();
                printf("Deseja continuar cadastrando [s/n]: ");
                scanf(" %c",&con);
            }while((idg<max)&&(tolower(con)=='s'));
            break;
        case 2:
            printf("Digite o matricula que deseja consultar: ");
            scanf("%d",&n);
            if (consultar(n)==true){
                printf("\nMatricula do Aluno: %d\n",tbAluno[idc].matricula);
                printf("Nome do Aluno: %s\n",tbAluno[idc].nomeAluno);
                printf("Curso do Aluno: %s\n",tbAluno[idc].curso);
                printf("Turno do Aluno: %s\n",tbAluno[idc].turno);
            }else{
                printf("Aluno não consta na lista!\n");
            }
            sleep(3);
            break;
        case 3:
            printf("Digite a matricula que deseja alterar: ");
            scanf("%d",&n);
            if (consultar(n)==true){
                printf("1 - NomeAluno\n");   
                printf("2 - Curso\n");   
                printf("3 - Turno\n\n");   
                printf("Digite a opção desejada: ");
                scanf("%d",&opc);
                system("clear");
                switch(opc){
                    case 1:
                        printf("Digite o novo nome do Aluno: ");
                        getchar();
                        fgets(tbAluno[idc].nomeAluno,sizeof(tbAluno[idc].nomeAluno),stdin);
                        tbAluno[idc].nomeAluno[strcspn(tbAluno[idc].nomeAluno,"\n")] ='\0';
                        break;
                    case 2:
                    case 3:
                    default:
                        printf("Opção inválida!\n"); 
                        break;
                }
                printf("Alteração realizada com sucesso!\n");
            }else{
                printf("Número não consta na lista!\n");
            }
            sleep(3);
            break;
        case 4:
            orgcrescente();
            printf("Lista organizada com sucesso!\n");
            sleep(3);
            break;
        case 5:
            orgdecrescente();
            printf("Lista organizada com sucesso!\n");
            sleep(3);
            break;
        case 6:
            printf("Digite o número que deseja excluir: ");
            scanf("%d",&n);
            if (consultar(n)==true){
                excluir(idc);
                printf("Número excluído com sucesso!\n");
            }else{
                printf("Número não consta na lista!\n");
            }
            sleep(3);
            break;
        case 7:
            imprimir();
            break;
        case 8:
            cor();
            break;
        default:
            if(op!=9){
               printf("Opção inválida!\n");  
               sleep(3);
            } 
            break;
        }
    }while(op!=9);
    system("clear");
    printf("Systema finalizado com sucesso!");
}