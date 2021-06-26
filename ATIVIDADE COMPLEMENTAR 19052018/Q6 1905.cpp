#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
// Vítor Emmanuel

main() {
	
	int vetor1[10], vetor2[10], interseccao[10], i, j, k, cont_i;
	
	setlocale (LC_ALL, "Portuguese");
	
	for(i=0;i<10;i++){
		 printf("Digite o %d° número do Vetor 1: ",i+1);
		 scanf("%d",&vetor1[i]);
	 }	
	 
	 for(i=0;i<10;i++){
		 printf("Digite o %d° número do Vetor 2: ",i+1);
		 scanf("%d",&vetor2[i]);
	 }
	 
	 cont_i=0;
	 
	 for (i=0;i<10;i++)
		{ 
			j = 0;
			while (j < 10 && vetor1[i] != vetor2[j])
			 { 
				  j++;
			 }
			if (j < 10)
				 {
					 k = 0;
					 while (k < cont_i && interseccao[k] != vetor1[i])
					 {
							k++;
					 }
					 if (k >= cont_i)
							{ interseccao[cont_i] = vetor1[i];
								cont_i++;
							}
					}
	 }
	 
	 printf("\n O vetor intersecção é: \n");
	 for(i=0;i<cont_i;i++){
		 printf(" %d ", interseccao[i]);
	 }
}
