#include <stdio.h>

//Leia  dois  números  reais  A  e  B  e  os 
//imprima  na  tela.  O  valor  da  variável  A  deve  ser  apresentado 
//com duas casa decimais e o valor da variável B com três casas 
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
