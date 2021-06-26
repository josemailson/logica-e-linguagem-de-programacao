#include <stdio.h>

//5.
//  Faça  um  programa  que  leia  o  nome  do  usuário,  a  idade  do 
//usuário,  o  nome  da  mãe  do  usuário  e  a  idade  da  mãe  do 
//usuário.  O  programa  deverá  imprimir  na  tela  quantos  anos  a 
//mãe  do  usuário  tinha  quando  ele  nasceu. A  resposta  deve  ter 
//o formato deste exemplo: “Carlos, quando voce nasceu, Dona 
//Cecilia tinha 27 anos”.

main()

{
	char nome[20], nomem[20];
	int idade, idadem;
	
	printf("\nDigite o seu nome: ");
	scanf("%s", &nome);
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	printf("\nDigite o nome da sua mae: ");
	scanf("%s", &nomem);
	printf("\nDigite a idade da sua mae: ");
	scanf("%d", &idadem);
	
	printf("%s, quando voce nasceu, Dona %s tinha %d anos", nome, nomem, idadem-idade);
}
