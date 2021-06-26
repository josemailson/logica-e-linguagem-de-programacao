#include <stdio.h>

main()

{
	int idade, maioridade, menoridade, qnt_mulheres, sexo;
	float sal, soma, media, i;
	
	maioridade = 0;
	menoridade = 10000000;
	
	for (i=1; i<=50; i++)
	{
		printf("Digite a idade: ");
		scanf("%d",&idade);
		printf("Digite o sexo (1- Masculino/ 2- Feminino): ");
		scanf("%d",&sexo);
		printf("Digite o salario: ");
		scanf("%f",&sal);
		soma = soma + sal;
		if (sexo==2){
			if (sal<=200)
			qnt_mulheres = qnt_mulheres + 1;
		}
		if (idade > maioridade)
			maioridade = idade;
		if (idade < menoridade)
			menoridade = idade;
		
	}
	
	media = soma/50;
	
	printf("\nA media salarial dos entrevistados foi de R$%.2f",media);
	printf("\nA maior idade encontrada foi %d",maioridade);
	printf("\nA menor idade encontrada foi %d",menoridade);
	printf("\nA quantidade de mulheres encontradas com Salario inferio a R$200,00 foi de %d mulheres", qnt_mulheres);
}
