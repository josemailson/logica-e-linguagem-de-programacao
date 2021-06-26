#include <stdio.h>

// Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do combustível é de R$2.59, faça um programa para ler:
// a marcação do odômetro (Km) no início do dia, a marcação (Km) no final do dia, a quantidade de litros de combustível gasto e o valor total (R$) recebido dos 
// passageiros. Calcular e escrever: a média do consumo em km/l e o lucro (líquido) do dia. 

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
