#include <stdio.h>

//6. Fa�a um programa que leia o n�mero total de presta��es de um cons�rcio, o total de presta��es pagas e o valor atual da presta��o. O programa deve calcular e
// apresentar o saldo devedor atual e a quantidade de presta��es sem pagar.

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
