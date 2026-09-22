/*
No contexto da tomada de decisão em sistemas computacionais, estruturas condicionais são fundamentais para o direcionamento do fluxo de execução de um algoritmo. Considere o pseudocódigo
apresentado abaixo:
INICIO
ESCREVA ("Digite seu nome:");
LEIA (nome);
ESCREVA ("Digite seu idade:");
LEIA (idade);
ESCREVA ("Digite seu Renda:");
LEIA (renda);
ESCREVA ("Digite seu Score:");
LEIA (score);

SE (idade < 0 OU renda < 0 OU score < 0) ENTAO
    ESCREVA ("Dados invalidos");
SENAO
    SE (idade >= 18) ENTAO
        SE (renda >= 2000 E score >= 600) ENTAO
            ESCREVA ("Credito Aprovado.");
        SENAO SE (renda >= 1500 OU score >= 500) ENTAO
            ESCREVA ("Credito em Analise.");
        SENAO
            ESCREVA ("Credito Negado.");
        FIMSE
    SENAO
        ESCREVA (Menor de idade - não elegivel)
    FIMSE
FIMSE

FIM

Com base no algoritmo, responda:
1- Qual é o objetivo do algoritmo?
2- Quais são as entradas e saídas?
3- Explique todas as possiveis classificações apresentadas pelo algoritmo;
4- Apresente dois exemplos de entrada: um que resulte em "Crédito aprovado" e outro em "Crédito negado".
5- Reescreva a logica do algoritmo com suas proprias palavras.
*/