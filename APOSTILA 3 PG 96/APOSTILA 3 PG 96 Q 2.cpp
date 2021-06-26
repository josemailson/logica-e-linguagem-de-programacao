#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

typedef struct { int codigo, pais;
			    char cidade[20];
				float diariah, diariac, total;   
				} TRoteiro;

FILE *proteiro;
TRoteiro roteiro_aux, roteiro_nulo;

void linha() 
{ 	int i; 
	for (i=1; i<=87; i++)  
	printf("_");
	printf("\n");
}

void cabec() 
{ system("cls"); 
printf("\nVida Boa Turismo\n"); 
linha(); 
}

void abre_arquivo() 
{ proteiro = fopen("roteiro.dat", "r+b"); 
if (proteiro == NULL)  
proteiro = fopen("roteiro.dat", "w+b"); 
}

void inserir() 
{ int resp; 
do { cabec();  
printf("\n\nCadastrar Roteiro\n\n");  
printf("\nCódigo..............................: ");  
scanf("%d", &roteiro_aux.codigo);  
printf("\nPaís(1-Brasil, 2-Espanha, -3-Italia): ");  
scanf("%d", &roteiro_aux.pais);
printf("\nCidade..............................: ");  
fflush(stdin);  
gets(roteiro_aux.cidade); 
printf("\nDiária de Hotel.....................: R$ ");  
scanf("%f", &roteiro_aux.diariah); 
printf("\nDiária Aluguel de Carro.............: R$ ");
scanf("%f",&roteiro_aux.diariac);
fseek(proteiro, 0, SEEK_END);  
fwrite(&roteiro_aux, sizeof(TRoteiro), 1, proteiro);  
printf("\n\nRoteiro cadastrado com sucesso! \n\n");  
printf("\nDeseja cadastrar outro (1-Sim/0-Não)? ");  
scanf("%d", &resp); 
} while (resp ==1); 
}

void mostre(int pos)
{ fseek(proteiro, pos*sizeof(TRoteiro), SEEK_SET); 
fread(&roteiro_aux, sizeof(TRoteiro), 1, proteiro); 
printf("\n\n"); linha(); 
printf("Código   País   Cidade                   Diária     Hotel     Carro\n"); 
linha(); 
printf("%6d   %4d   %-20s              %7.2f    %7.2f\n", roteiro_aux.codigo,roteiro_aux.pais,roteiro_aux.cidade,
roteiro_aux.diariah,roteiro_aux.diariac);        
linha(); 
}

int procura(int matp) 
{ int p; 
p = 0; 
rewind(proteiro); 
fread(&roteiro_aux, sizeof(TRoteiro), 1, proteiro); 
while (feof(proteiro)==0) 
{ if (roteiro_aux.codigo == matp)   
return p;  
else  
{ 
fread(&roteiro_aux, sizeof(TRoteiro), 1, proteiro);  
p++;
} 
} 
return -1; 
}

void consultar() 
{ int resp, codigocon, posicao; 
do{ cabec();  
printf("\n\nConsultar Roteiro\n\n\n");  
printf("Código do roteiro a ser consultado: ");  
scanf("%d", &codigocon);  
posicao = procura(codigocon);  
if (posicao == -1)   
printf("\n\nRoteiro não encontrado! \n\n");   
else   mostre(posicao);  
printf("\n\nDeseja consultar outro roteiro (1-Sim/0-Não)? ");  
scanf("%d", &resp); 
} while (resp == 1); 
}

void listagem() 
 { cabec(); 
 printf("\n\nListagem de todos os roteiros\n\n\n"); 
 linha(); 
 printf("Código   País   Cidade                   Diária     Hotel     Carro\n");  
 linha(); 
 rewind(proteiro); 
 fread(&roteiro_aux, sizeof(TRoteiro), 1, proteiro); 
 while (feof(proteiro)==0) 
 { if (roteiro_aux.codigo != 0)  
 printf("%6d   %4d   %-20s              %7.2f    %7.2f\n", roteiro_aux.codigo,roteiro_aux.pais,roteiro_aux.cidade,
 roteiro_aux.diariah,roteiro_aux.diariac);  
fread(&roteiro_aux, sizeof(TRoteiro), 1, proteiro); 
} linha(); 
printf("tecle enter para voltar ao menu..."); 
getche(); 
}

void simular()
{
	int codigos, dias, carro, resp, posicao;
	do{
	cabec();
	printf("\n\nSimular Viagem\n\n\n");
	printf("Código do Roteiro: ");
	scanf("%d",&codigos);
	posicao = procura(codigos);
	if (posicao == -1)   
	printf("\n\nRoteiro não encontrado! \n\n");   
	else   mostre(posicao);	
	printf("\n");
	printf("\nQuantidade de dias: ");
	scanf("%d",&dias);
	printf("\nAlugar carro(1-sim, 2-não)? ");
	scanf("%d",&carro);
	if (carro==1){
		roteiro_aux.total = dias*(roteiro_aux.diariah + roteiro_aux.diariac);
	}
	if (carro==2){
		roteiro_aux.total = dias*roteiro_aux.diariah;
	}
	printf("\nValor total da viagem = R$ %.2f", roteiro_aux.total);
	printf("\n\nDeseja simular outro roteiro (1-Sim/0-Não)? ");  
	scanf("%d", &resp);
	} while (resp == 1);
}

main() 
{ int op;
setlocale(LC_ALL, "Portuguese");
abre_arquivo(); 
do{ cabec();  
printf("\n\nOpções: \n\n\n");  
printf("   1- Cadastrar roteiro\n\n");     
printf("   2- Consultar roteiro\n\n");
printf("   3- Listagem de todos os roteiros\n\n");
printf("   4- Simular viagem\n\n");   
printf("   0- Sair\n\n");   
linha();  
printf("Entre com a opção desejada: ");  
scanf("%d", &op);  
switch(op)  
{ 	case 1: inserir(); break;      
	case 2: consultar(); break;
	case 3: listagem(); break;
	case 4: simular(); break;  
	case 0: fclose(proteiro); break;
		default: printf("\n\n\aOpção inválida!");
		break;
} 
} while (op != 0); 
}
