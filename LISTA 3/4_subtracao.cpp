#include <stdio.h>

//4. 
//Fa�a  um  programa  que  leia  dois  n�meros  inteiros  A  e  B  e 
//imprima o resultado da subtra��o de A por B. A resposta deve 
//ter o seguinte formato: �6 � 2 = 4�.

main()

{
	int A, B;
	
	printf("\nDigite o numero inteiro A: ");
	scanf("%d",&A);
	printf("\nDigite o numero inteiro B: ");
	scanf("%d",&B);
	
	printf("\n %d - %d = %d", A, B, A-B);
}
