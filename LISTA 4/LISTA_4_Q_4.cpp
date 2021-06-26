#include <stdio.h>

main()

{
	int dias;
	float total;
	
	printf("Digite o numero de dias que o hospede ficou no hotel: ");
	scanf("%d",&dias);
	
	if (dias<15)
	total = (15.3*dias);
	else
	if (dias==15)
	total = (10*dias);
	else
	if (dias>15)
	total = (8.5*dias);
	
	printf("Taxa total a pagar igual a R$%.2f",total);
	
}
