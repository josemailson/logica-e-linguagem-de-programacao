#include <stdio.h>

//3.
// Faca um programa que leia o nome do usuário e a sua idade e 
//imprima quantos anos ele terá em 2020. A resposta deve ter o 
//formato deste exemplo: “Carlos, em 2020 voce estara com 45 
//anos”

main()

{
	char nome[20];
	int idade;
	
	printf("\nDigite seu nome: ");
	scanf("%s",&nome);
	printf("\nDigite sua idade: ");
	scanf("%d",&idade);
	
	printf("\n%s, em 2020 voce estara com %d anos", nome, idade+2);
}
