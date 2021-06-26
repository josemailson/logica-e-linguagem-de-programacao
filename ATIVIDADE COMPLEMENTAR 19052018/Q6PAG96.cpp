#include <stdio.h>
#define TAM 4

main()

{
	int i, j, x, a[TAM], b[TAM], c[x];
	
	for(i=0;i<TAM;i++)
	{
		printf("Digite o numero %d do vetor A: \n",i+1);
		scanf("%s",&a[i]);
	}
	for(i=0;i<TAM;i++)
	{
		printf("Digite o numero %d do vetor B: \n",i+1);
		scanf("%s",&b[i]);
	}
	
	x = 0;
	for(i=0;i<TAM;i++)
	{
		for(j=0;i<TAM;j++)
		{
			if (a[i]==b[j])
			{
				c[x] = a[i];
				x++;
			}
		}
	}
	
	printf("Vetor intersecao: ");
	for(i=0;i<x;i++)
	{
		printf("%d", c[i]);
	}
}
