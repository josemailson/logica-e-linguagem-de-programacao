#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 4

main()

{
	int i, vogais;
	float pconsoantes;
	char letras[20];
	
	for (i=0;i<20;i++)
	{
		printf("Digite a letra %d para o vetor: \n",i+1);
		scanf("%s",&letras[i]);
	}
	
	for (i=0;i<20;i++)
	{
		if ((letras[i]=='a') || (letras[i]=='e') || (letras[i]=='i') || (letras[i]=='o') || (letras[i]=='u'))
		{
			vogais++;
		}
	}
	
	pconsoantes = (((20 - vogais)/20)*100);
	
	printf("\nO numero de vogais do vetor igual a %d\n", vogais);
	printf("O percentual de consoantes do vetor igual a %f %%", pconsoantes);
}
