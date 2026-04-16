/*
O programa a ser desenvolvido em linguagem C devera apresentar um menu principal que permaneca em execucao
contınua ate que o usuario digite S ou s para encerrar o sistema.
No interior do laco de repeticao, o sistema devera solicitar as seguintes informacoes:
• Nome do aluno;
• Documento de identificacao;
• Numero de matrıcula.
Em seguida, o programa devera receber as disciplinas cursadas pelo aluno, contendo:
• Nome da disciplina;
• Media obtida na disciplina.
A entrada das disciplinas e respectivas notas devera ocorrer de forma contınua, sendo finalizada quando for
informada uma nota negativa, a qual funcionara como criterio de parada.
Durante o processo de insercao das notas, o programa devera:
• Acumular a soma das medias informadas;
• Contabilizar a quantidade de disciplinas registradas;
• Calcular a media final do aluno ao termino da entrada de dados.
Apos a insercao de uma nota negativa, o sistema devera exibir a media final das disciplinas cursadas e proceder
a seguinte verificacao:
• Caso a media seja maior ou igual a 7,0, o aluno devera ser considerado aprovado, podendo escolher entre
cinco novas disciplinas que deverao ser apresentadas pelo sistema;
• Caso a media seja inferior a 7,0, o aluno devera ser considerado reprovado. Nesse caso, o sistema devera
questionar se o aluno deseja repetir a disciplina:
– Em caso afirmativo, o aluno devera escolher entre quatro novas disciplinas;
– Em caso negativo, o aluno devera escolher entre cinco disciplinas distintas daquelas oferecidas aos
alunos aprovados.
Adicionalmente, as estruturas utilizadas no desenvolvimento do programa deverao estar em conformidade com os
conteudos apresentados em sala de aula, contemplando o uso adequado de variaveis, estruturas de decisao, estruturas
de repeticao e organizacao logica do algoritmo.
*/

#include <stdio.h>

int main(){
  char exec = 'E';
  char name[20];
  int docId, studentId;

  while (exec == 'E'){
    printf("#################################################\n");
    printf("SEJA BEM-VINDO AO SISTEMAS DE MEDIAS E MATRICULAS\n");
    printf("#################################################\n\n");

    printf("Para iniciar, digite o nome do aluno:\n");
    scanf("%s", &name);
    printf("\nAgora digite o numero do Documento de Identificacao do aluno (somente numeros):\n");
    scanf(" %d", &docId);
    printf("\nPor fim, digite o numero de matricula do aluno (somente numeros):\n");
    scanf("%d", &studentId);

    exec = 'S';

  }

  return 0;
}
