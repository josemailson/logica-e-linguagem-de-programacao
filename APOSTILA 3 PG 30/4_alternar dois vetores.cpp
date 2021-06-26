#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()

{
	int i, j, a, b, vetor1[a], vetor2[b], vetor3[a+b];
	
	printf("\nDigite o numero de elementos do vetor 1: ");
	scanf("%d",&a);
	
	printf("\nDigite o numero de elementos do vetor 2: ");
	scanf("%d",&b);
	
	for(i=0;i<a;i++)
	{
		printf("\nDigite o numero %d do vetor 1: ",i+1);
		scanf("%d",&vetor1[i]);
	}
	for(i=0;i<b;i++)
	{
		printf("\nDigite o numero %d do vetor 2: ",i+1);
		scanf("%d",&vetor2[i]);
	}
	
	if (a==b)
	{	
		for(j=0;j<a;j++)
		{	
		for(i=0;i<(a+b);i+2)
		{
			vetor3[i] = vetor1[j];
		}
		}
		for(j=0;j<a;j++)
		{
		for(i=1;i<(a+b);i+2)
		{
			vetor3[i] = vetor2[j];
		}
		}
		printf("\nVetor 3 com os primeiros vetores intercalados: \n");
		for(i=0;i<(a+b);i++)
		{
			printf("\n%d",vetor3[i]);
		}
	}
	else
	printf("Vetores com tamanhos diferentes!");
	
}
