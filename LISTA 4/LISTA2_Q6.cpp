#include <stdio.h>

main()

{
	int fab, comp, nec, total, emp_possui, continuar, toshiba, emp_nec;
	
	do {
		printf("\nPreferencia para fabricante: (1-Toshiba/2-HP/3-Sony)");
		scanf("%d",&fab);
		printf("\nPossui computador de grande porte: (1-Sim/2-Nao)");
		scanf("%d",&comp);
		printf("\nNecessita de notebook: (1. Sim/2. Nao)");
		scanf("%d",&nec);
		total++;
		if (comp==1)
		emp_possui++;
		else
		if (fab==1)
		toshiba = (toshiba+1);
		else
		if (nec==1)
		emp_nec++;
		
		printf("\n\n\nDeseja	cadastrar	outro	(1-sim/2-nao)?	");
		scanf("%d",&continuar);	
	} while	(continuar==1);
	
	printf("\nA quantidade de empresas pesquisadas foi %d empresas", total);
	printf("\nA quantidade de empresas que possuem computador de grande porte foi de %d empresas", emp_possui);
	printf("\nO percentual de empresas que necessitam de notebook foi de %f %%", (emp_nec/total)*100);
	printf("\nO percentaul de mepresas que tem preferencia pela Toshiba foi de %f %%", (toshiba/total)*100);
}
