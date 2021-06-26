#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 6

int main () {

	int veta[TAM],vetb[TAM],vetc[TAM],i;
		setlocale (LC_ALL, "Portuguese");
	
	for(i = 0; i < TAM; i++) {
		printf("Digite o numero %d do vetor A: \n",i+1);
		scanf("%d",&veta[i]);
	}
	
	for(i = 0; i < TAM; i++) {
		printf("Digite o numero %d do vetor B: \n",i+1);
		scanf("%d",&vetb[i]);
	}
	
	for(i = 0; i < TAM; i++) {
		vetc[i*2] = veta[i];
	}
	
	for(i = 0; i < TAM; i++) {
		vetc[i*2+1] = vetb[i];
	}
	
	printf("\nVetor A\n");
	for(i = 0; i < TAM; i++){
		printf("%d ",veta[i]);
	}
	
	printf("\nVetor B\n");
	for(i = 0; i < TAM; i++){
		printf("%d ",vetb[i]);
	}
	
	printf("\nVetor C\n");
	for(i = 0; i < TAM*2; i++){
		printf("%d ",vetc[i]);
	}
	
	return 0;
}
