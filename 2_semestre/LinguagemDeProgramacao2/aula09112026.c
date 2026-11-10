/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

int opc=0, op=0, lista[5], idc=0, idg=0, mat;
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

void alterar(int p, int op){
    switch(op){
        case 1:
            printf("Digite o novo nome: ");
            scanf("%s",&tbAluno[p].nomeAluno);
            break;
        case 2:
            printf("Digite o novo curso: ");
            scanf("%s",&tbAluno[p].curso);
            break;
        case 3:
            printf("Digite o novo turno: ");
            scanf("%s",&tbAluno[p].turno);
            break;
    }
    printf("Registro alterado com sucesso!\n");
}


void excluir(int id){
    idg--;
    for(int i=id;i<idg;i++){
        tbAluno[i]=tbAluno[i+1];
    }
}


//p=idc
void imprimir(int p){
    printf("\nMatricula do Aluno: %d\n",tbAluno[p].matricula);
    printf("Nome do Aluno: %s\n",tbAluno[p].nomeAluno);
    printf("Curso do Aluno: %s\n",tbAluno[p].curso);
    printf("Turno do Aluno: %s\n\n",tbAluno[p].turno);
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


void orgcrescente(int op){
    switch(op){
        case 1:
            for (int x=0;x<idg-1;x++){
                for(int y=x+1;y<idg;y++){
                    if (tbAluno[x].matricula>tbAluno[y].matricula){
                        a=tbAluno[x];
                        tbAluno[x]=tbAluno[y];
                        tbAluno[y]=a;
                    }
                }
            }
        break;
        
        case 2:
            for (int x=0;x<idg-1;x++){
                for(int y=x+1;y<idg;y++){
                    if (strcmp(tbAluno[x].nomeAluno, tbAluno[y].nomeAluno) > 0){
                        a = tbAluno[x];
                        tbAluno[x] = tbAluno[y];
                        tbAluno[y] = a;
                    }
                }
            }
        break;
    }
    
}

void orgdecrescente(int op){
    switch(op){
        case 1:
            for (int x=0;x<idg-1;x++){
                for(int y=x+1;y<idg;y++){
                    if (tbAluno[x].matricula<tbAluno[y].matricula){
                        a=tbAluno[x];
                        tbAluno[x]=tbAluno[y];
                        tbAluno[y]=a;
                    }
                }
            }
        break;
        
        case 2:
            for (int x=0;x<idg-1;x++){
                for(int y=x+1;y<idg;y++){
                    if (strcmp(tbAluno[x].nomeAluno, tbAluno[y].nomeAluno) < 0){
                        a=tbAluno[x];
                        tbAluno[x]=tbAluno[y];
                        tbAluno[y]=a;
                    }
                }
            }
        break;
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
            if (idg>0){
                printf("Digite o matricula que deseja consultar: ");
                scanf("%d",&mat);
                if (consultar(mat)==true){
                    imprimir(idc);
                }else{
                    printf("Aluno não consta na lista!\n");
                }
            }else{
                printf("Não existe registro na tabela!\n");
            }
            sleep(3);
            break;
        case 3:
            if (idg>0){
                printf("Digite a matricula que deseja alterar: ");
                scanf("%d",&mat);
                if (consultar(mat)==true){
                    printf("1 - NomeAluno\n");   
                    printf("2 - Curso\n");   
                    printf("3 - Turno\n\n");   
                    printf("Digite a opção desejada: ");
                    scanf("%d",&opc);
                    system("clear");
                    alterar(idc,opc);
                }else{
                    printf("Aluno não consta na lista!\n");
                }
            }else{
                printf("Não existe registro na tabela!\n");
            }
            sleep(3);
            break;
        case 4:
          if (idg > 1){
            printf("Escolha como deseja organizar:\n");
            printf("1 - Ordenar por Matricula\n");
            printf("2 - Ordenar por Nome de Aluno\n");
            scanf("%d", &op);
            orgcrescente(op);
            printf("Lista organizada com sucesso!\n");
          }else if (idg == 0){
            printf("Não existe registro na tabela!\n");
          }else{
            printf("Adicione mais cadastros!\n");
          }
          sleep(3);
          break;
        case 5:
          if (idg > 1){
            printf("Escolha como deseja organizar:\n");
            printf("1 - Ordenar por Matricula\n");
            printf("2 - Ordenar por Nome de Aluno\n");
            scanf("%d", &op);
            orgdecrescente(op);
            printf("Lista organizada com sucesso!\n");

          }else if (idg == 0){
            printf("Não existe registro na tabela!\n");
          }else{
            printf("Adicione mais cadastros!\n");
          }
          sleep(3);
          break;
        case 6:
            if(idg>0){
                printf("Digite a matrícula que deseja excluir: ");
                scanf("%d",&mat);
                if (consultar(mat)==true){
                    excluir(idc);
                    printf("Registro excluído com sucesso!\n");
                }else{
                    printf("Registro não consta na lista!\n");
                }
            }else{
                printf("Não existe registro na tabela!\n");
            }
            sleep(3);
            break;
        case 7:
            if (idg>0){
                for (int x=0;x<idg;x++){
                    imprimir(x);
                }
            }else{
                printf("Não existe registro na tabela!\n");
            }
            sleep(5);
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
