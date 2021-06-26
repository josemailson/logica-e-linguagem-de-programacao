#include <stdio.h>

main()

{
	int a,b,c,d,menor;
	
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d",&a);
	printf("Digite o segundo numero inteiro: ");
	scanf("%d",&b);
	printf("Digite o terceiro numero inteiro: ");
	scanf("%d",&c);
	printf("Digite o quarto numero inteiro: ");
	scanf("%d",&d);
	
	if ((a<b) and (a<c) and (a<d))
	menor = a;
	else
	if ((b<a) and (b<c) and (b<d))
	menor = b;
	else
	if ((c<a) and (c<b) and (c<d))
	menor = c;
	else
	if ((d<a) and (d<b) and (d<c))
	menor = d;

	printf("O menor numero digitado: %d", menor);
}
