#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()

{
	char nome[5];
	float notas, nota[5][3], media;
	int i,j;
	
	notas = 0;
	
	for(i=0;i<5;i++)
	{
		printf("Digite o nome do aluno %d: \n",i+1);
		scanf("%s",&nome[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite a nota %d do aluno %d: \n",j+1,i+1);
			scanf("%d",nota[i][j]);
			notas = (notas + nota[i][j]);
		}
	}
	
	media = notas/15;
	
	printf("Alunos com media superior ou igual a media geral da turma: \n\n");
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			if (nota[i][j]>=media)
			{
				printf("%s \n",nome[i]);
			}
		}
	}
}
