#include <stdio.h>

//6. Faça um programa que leia o número total de prestações de um consórcio, o total de prestações pagas e o valor atual da prestação. O programa deve calcular e
// apresentar o saldo devedor atual e a quantidade de prestações sem pagar.

main()

{
	float valor;
	int total, pagas;
	
	printf("\nDigite o numero total de prestacoes: ");
	scanf("%d",&total);
	printf("\nDigite o numero de prestacoes pagas: ");
	scanf("%d",&pagas);
	printf("\nDigite o valor da prestacao: ");
	scanf("%f",&valor);
	
	printf("\nSaldo devedor atual: %.2f", (total-pagas)*valor);
	printf("\nQuantidade de prestacoes sem pagar: %d",(total-pagas));
	
}
