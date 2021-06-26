#include <stdio.h>

main()

{
	int i, j, a, b, vetor1[a], vetor2[b], soma[a];
	
	printf("\nDigite o numero de elementos do vetor 1: ");
	scanf("%d",&a);
	
	printf("\nDigite o numero de elementos do vetor 2: ");
	scanf("%d",&b);
	
	for(i=0;i<a;i++)
	{
		printf("\nDigite o numero %d do vetor 1: ",i+1);
		scanf("%d",&vetor1[i]);
	}
	for(j=0;j<b;j++)
	{
		printf("\nDigite o numero %d do vetor 2: ",j+1);
		scanf("%d",&vetor2[j]);
	}
	
	if(a==b)
	{
		for(i=0;i<a;i++)
		{
				soma[i] = (vetor1[i] + vetor2[i]);
		}
		printf("\nVetor SOMA dos dois vetores\n");
		for (i=0;i<a;i++)
		{
			printf("%d, ",soma[i]);
		}
	}
	else
	printf("\nVetores de tamanhos diferente, nao ha soma");
}
