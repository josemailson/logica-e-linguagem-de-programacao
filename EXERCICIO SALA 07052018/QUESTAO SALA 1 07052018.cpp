#include <stdio.h>

main()
{
int valor[10];
int i, soma;
float media;
printf("Cadastro dos elementos do vetor Valor \n\n");
for (i=0; i<10; i++)
{ printf("\n\nElemento %d: ",i+1);
scanf("%d",&valor[i]);
soma=(valor[i]+soma);
}
for (i=0; i<10; i++)
{ printf("\n\n Elemento %d igual a %d",i+1,valor[i]);
}
printf("\n\n Elementos em ordem descrescente:");
for (i=9; i>=0; i--)
{ printf("\n\n %d",valor[i]);
}
printf("\n\n Elementos impares no vetor:");
for (i=0; i<10; i++)
{ if (valor[i]%2!=0)
	printf("\n\n %d",valor[i]);
}
media = (soma/10);
printf("\n\n Media dos numeros digitados no vetor: %.2f", media);
}
