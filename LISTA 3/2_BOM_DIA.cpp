#include <stdio.h>

//Fa�a um programa que leia o nome do usu�rio e escreva uma 
//frase  de  sauda��o,  desejando  um  bom  dia  de  trabalho  para 
//o  mesmo. A  resposta  deve  ter  o  formato  deste  exemplo:  �Ola 
//Joao, tenha um otimo dia de trabalho!�. Faca o programa soar 
//um sinal sonoro(beep) ao escrever esta frase.

main()

{
	char nome[20];
	
	printf("\nDigite seu nome: ");
	scanf("%s", &nome);
	
	printf("\nOla %s, tenha um otimo dia de trabalho!\a", nome);
}
