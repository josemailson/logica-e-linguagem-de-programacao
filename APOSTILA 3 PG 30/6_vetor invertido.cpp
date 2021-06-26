#include <stdio.h>

main()

{
	int q, i, j, aux, vetor[q], continuar;
	
	do
	{
		printf("\nDigite o elemento %d do vetor:\n ",q+1);
		scanf("%d",&vetor[q]);
		q++;
		printf("Deseja continuar? 1-sim 2-nao: ");
		scanf("%d", &continuar);
	} while ((continuar==1));
	
	for (i=0; i<q/2; i++) 
	{
    aux = vetor[i];
    vetor[i] = vetor[q-i-1];
    vetor[q-i-1] = aux;
	}
	
	printf("Vertor invertido!\n");
	for (i=0; i<q; i++)
	{
		printf("%d\n",vetor[i]);
	}
}
