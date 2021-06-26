#include <stdio.h>

main()

{
	int q, i, vetor[q], maior, menor, a, b, continuar;
	
	q=0;
	maior=0;
	menor=100000;
	
	do
	{
		printf("\nDigite o elemento %d do vetor:\n ",q+1);
		scanf("%d",&vetor[q]);
		q++;
		printf("Deseja continuar? 1-sim 2-nao: ");
		scanf("%d", &continuar);
	} while ((continuar==1));
	
	for(i=0;i<q;i++)
	{
		if (vetor[i]>maior)
		{
			maior = vetor[i];
			a=i;
		}
	}
	for(i=0;i<q;i++)
	{
		if (vetor[i]<menor)
		{
			menor = vetor[i];
			b=i;
		}
	}
	
	printf("\nMaior numero do vetor esta no elemento %d", a+1);
	printf("\nMenor numero do vetor esta no elemento %d", b+1);
}

