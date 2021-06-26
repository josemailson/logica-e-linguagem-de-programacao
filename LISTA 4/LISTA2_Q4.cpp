#include <stdio.h>

main()

{
	float alt, maior, menor, media_m, media, soma, soma_m;
	int sexo, i, cont;
	
	maior = 0;
	menor = 10000000;
	
	for (i=1; i<=10; i++)
	{
	printf("Digite a altura: ");
	scanf("%f",&alt);
	printf("Sexo (1- Masculino/ 2- Feminino): ");
	scanf("%d",&sexo);
	soma= soma + alt;
	
	if (sexo==2){
	soma_m = soma_m + alt;
	cont = cont + 1;
}
	if (alt > maior)
	maior = alt;
	else
	if (alt < menor)
	menor = alt;
}

	media = soma/10;
	media_m = (soma_m/cont);

	printf("\nA maior altura da turma: %.2f", maior);
	printf("\nA menor altura da turma: %.2f", menor);
	printf("\nA media de altura entre as mulheres: %.2f", media_m);
	printf("\nA media de altura da turma: %.2f", media);
}
