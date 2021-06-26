#include <stdio.h>

main()

{
	int q, p, i, j, cont, continuar, v1[q], v2[p], inter[cont];
	q=0;
	p=0;
	cont=0;
	
	do
	{
		printf("\nDigite o elemento %d do vetor 1:\n ",q+1);
		scanf("%d",&v1[q]);
		q++;
		printf("Deseja continuar? 1-sim 2-nao: ");
		scanf("%d", &continuar);
	} while ((continuar==1));
	
	do
	{
		printf("\nDigite o elemento %d do vetor 2:\n ",p+1);
		scanf("%d",&v2[p]);
		p++;
		printf("Deseja continuar? 1-sim 2-nao: ");
		scanf("%d", &continuar);
	} while ((continuar==1));
	
	for(i=0;i<q;i++)
	{
		for(j=0;i<p;j++)
		{
			if(v1[i]==v2[j])
			{
				inter[cont]=v1[i];
				cont++;
			}
		}
	}
	
	printf("Vetor interseccao: \n");
	
	for(i=0;i<cont;i++)
	{
		printf("%d \n",inter[i]);
	}
}
