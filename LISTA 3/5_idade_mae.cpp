#include <stdio.h>

//5.
//  Fa�a  um  programa  que  leia  o  nome  do  usu�rio,  a  idade  do 
//usu�rio,  o  nome  da  m�e  do  usu�rio  e  a  idade  da  m�e  do 
//usu�rio.  O  programa  dever�  imprimir  na  tela  quantos  anos  a 
//m�e  do  usu�rio  tinha  quando  ele  nasceu. A  resposta  deve  ter 
//o formato deste exemplo: �Carlos, quando voce nasceu, Dona 
//Cecilia tinha 27 anos�.

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
