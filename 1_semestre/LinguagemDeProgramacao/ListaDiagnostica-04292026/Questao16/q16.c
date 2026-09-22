/*
Um loja deseja automatizar o calculo de compras realizadas por seus clientes, considerando multiplos produtos, descontos e impostos.
Desenvolva um programa em linguagem C que:
1- Utilize uma estrutura de repetição para permitir o cadastro de varios produtos;
2- Para cada produto, leia:
    Nome do produto;
    Preço unitario;
    Quantidade comprada;
3- O programa deve encerrar quando o usuario informar quantidade igual a 0.
4- Para cada produto:
    Calcule o valor total (preço x quantidade);
    Aplique um desconto conforme a regra:
        Até R$ 100,00 = sem desconto
        Entre R$ 100,01 e R$ 300,00 = 5% de desconto
        Acima de R$ 300,00 = 10% de desconto
5- Ao final do programa, apresente:
    O valor total bruto da compra
    O valor total de descontos concedidos
    O valor final a ser pago
    A classificação da compra:
        Até R$ 200,00 = Compra pequena
        Entre R$ 200,00 e R$ 600,00 = Compra média
        Acima de R$ 600,00 = Compra grande
*/