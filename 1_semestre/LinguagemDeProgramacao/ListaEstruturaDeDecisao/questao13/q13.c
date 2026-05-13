/*
Calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou 
superior a 6, ou a mensagem "Reprovado", caso contrário.
*/

#include <stdio.h>

int main(){
    float n1, n2, n3, media;

    printf("Digite a primeira nota do aluno:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno:\n");
    scanf("%f", &n3);
    
    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10) {
        printf("Erro: valores incorretos. As notas devem ser entre 0. e 10.\n");
        return 1;
    }

    media = (n1 + n2 + n3) / 3;

    if (media >= 6.){
        printf("O aluno obteve nota %.1f e esta Aprovado!\n", media);
    } else {
        printf("O aluno obteve nota %.1f e esta Reprovado!\n", media);
    }

    return 0;
}
