/*
Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos e 
segundos.
*/

#include <stdio.h>

int main(){
    int eventDuration, hours, minutes, seconds;

    printf("Digite a duracao do evento em segundos:\n");
    scanf("%d", &eventDuration);

    if (eventDuration < 0)
    {
        printf("Duracao invalida. Favor digitar um valor maior que 0.");
        return 1;
    }

    if (eventDuration < 60)
    {
        hours = 0;
        minutes = 0;
        seconds = eventDuration;
    } else {
        hours = eventDuration / 3600;
        minutes = (eventDuration % 3600) / 60;
        seconds = eventDuration % 60;
    }
    
    printf("%dh:%dmin:%ds.", hours, minutes, seconds);

    return 0;
}
