#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 8

// Vítor Emmanuel

int main() {
	
    int vet1[TAM], vet2[TAM], vet3[TAM*2], i;
 	
 	setlocale (LC_ALL, "Portuguese");
 	
    for (i = 0; i < TAM; i++) {
    	printf ("Digite o %d° número do Vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    }
 
    for (i = 0; i < TAM; i++) {
    	printf ("Digite o %d° número do Vetor 2: ", i+1);
        scanf("%d", &vet2[i]);
    }
 
    for (i = 0; i < TAM; i++) {
        vet3[i*2] = vet1[i];
    }
    for (i = 0; i < TAM; i++) {
        vet3[i*2+1] = vet2[i];
    }
 
    printf("Vetor 1: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet1[i]);
    }
    
    printf("\n");
 
    printf("Vetor 2: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet2[i]);
    }
    
    printf("\n");
 
    printf("Vetor 3: ");
    for (i = 0; i < TAM*2; i++) {
        printf("%d ", vet3[i]);
    }
 
    return 0;
}
