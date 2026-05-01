/*
Crie um programa que receba uma temperatura em graus Fahrenheit e transforme para graus Celsius pela formula
Tc = (5/9)(Tf-32)
O programa deve verificar se a temperatura em Celsius e maior do que 85° e
se for verdade informe ”Temperatura Elevada!! Desligar os computadores”, se
for falso informe ”Os computadores podem continuar ligados”.
*/

#include <stdio.h>

int main(){
    float tempC, tempF;
    
    printf("Digite a temperatura em Fahrenheit:\n");
    scanf("%f", &tempF);
    
    tempC = (5./9.)*(tempF - 32);
    // printf("%.1f", tempC);
    
    if(tempC >= 85){
        printf("Temperatura Elevada!! Desligar os computadores");
    }else{
        printf("Os computadores podem continuar ligados");
    }
    
    return 0;
}
