#include <stdio.h>

//Leia  dois  n�meros  reais  A  e  B  e  os 
//imprima  na  tela.  O  valor  da  vari�vel  A  deve  ser  apresentado 
//com duas casa decimais e o valor da vari�vel B com tr�s casas 
//decimais.

main()

{
	float A, B;
	printf("\nDigite numero real A: ");
	scanf("%f",&A);
	printf("\nDigite o numero real B: ");
	scanf("%f",&B);
	
	printf("\nValor para A: %.2f", A);
	printf("\nValor para B: %.3f", B);
}
