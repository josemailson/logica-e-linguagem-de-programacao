#include <stdio.h>

//Faça um programa que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos e segundos.

main ()

{
	int tempo;
	
	printf("\nDigite o tempo de duracao do evento em segundos: ");
	scanf("%d",&tempo);
	
	printf("Duracao de %d h %d min e %d seg",tempo/3600,((tempo%3600)/60),((tempo%3600)%60));
}
