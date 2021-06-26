#include <stdio.h>

main ()

{
	int num[10], i;
	
	for(i=0;i<10;i++)
	{
		printf("\nDigite o numero %d do vetor: \n",i+1);
		scanf("%d",&num[i]);
	}
	
	printf("\nVetor na ordem inversa:\n\n");
	
	for(i=9;i>=0;i--)
	{
		printf("\n %d",num[i]);
	}
}
