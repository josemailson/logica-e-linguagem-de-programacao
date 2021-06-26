#include <stdio.h>

main()

{
	char caractere[5];
	int i;
	
	printf("Cadastramento dos caracteres do vetor!\n\n");
	
	for(i=0; i<5; i++)
	{
		printf("Digite o caractere da posicao %d do vetor: ", i+1);
		scanf("%c",&caractere[i]);
	}
	
	printf("\nCaracteres do vetor:");
	for(i=0; i<5; i++)
	{
		printf("\n %c", caractere[i]);
	}
	
	printf("\n\n Em ordem descrescente: ");
	for(i=4; i>=0; i--)
	{
		printf("\n %c", caractere[i]);
	}
	
	printf("\n\n Vogais digitadas: ");
	for(i=0; i<5; i++)
	{
		if ((caractere[i]='a') or (caractere[i]='e') or (caractere[i]='i') or (caractere[i]='o') or (caractere[i]='u'))
		printf("\n %c", caractere[i]);
	}
}
