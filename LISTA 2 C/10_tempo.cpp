#include <stdio.h>

//Fa�a um programa que leia o tempo de dura��o de um evento em uma f�brica expressa em segundos e mostre-o expresso em horas, minutos e segundos.

main ()

{
	int tempo;
	
	printf("\nDigite o tempo de duracao do evento em segundos: ");
	scanf("%d",&tempo);
	
	printf("Duracao de %d h %d min e %d seg",tempo/3600,((tempo%3600)/60),((tempo%3600)%60));
}
