#include <stdio.h>

// Um motorista de t�xi deseja calcular o rendimento de seu carro na pra�a. Sabendo-se que o pre�o do combust�vel � de R$2.59, fa�a um programa para ler:
// a marca��o do od�metro (Km) no in�cio do dia, a marca��o (Km) no final do dia, a quantidade de litros de combust�vel gasto e o valor total (R$) recebido dos 
// passageiros. Calcular e escrever: a m�dia do consumo em km/l e o lucro (l�quido) do dia. 

main()

{
	float kmi, kmf, litros, valor;
	
	printf("\nDigite a marcacao do adometro (Km) no inicio do dia: ");
	scanf("%f",&kmi);
	printf("\nDigite a marcacao do adometro (Km) no final do dia: ");
	scanf("%f",&kmf);
	printf("\nDigite a quantidade de litros de gasolina gastos no dia: ");
	scanf("%f",&litros);
	printf("\nDigite o valor recebido de passageiros no dia: ");
	scanf("%f",&valor);
	
	printf("\nA media do consumo em Km/L: %f",(kmf-kmi)/litros);
	printf("\nO lucro (liquido) do dia: R$ %.2f", valor-(litros*2.59));
}
